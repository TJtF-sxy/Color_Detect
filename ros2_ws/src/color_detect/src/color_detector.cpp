#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <std_msgs/msg/string.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include "color_detect/srv/set_color.hpp"

class ColorDetector : public rclcpp::Node
{
    public:
    ColorDetector() : Node("color_detector"), target_color_("red")
    {
        subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/image_raw", 10, std::bind(&ColorDetector::image_callback, this, std::placeholders::_1)
        );
        image_pub_ = this->create_publisher<sensor_msgs::msg::Image>("/image_annotated", 10);
        result_pub_ = this->create_publisher<std_msgs::msg::String>("/detection_result", 10);
        
        service_ = this->create_service<color_detect::srv::SetColor>(
            "/set_color",
            std::bind(&ColorDetector::set_color_callback, this,
                std::placeholders::_1, std::placeholders::_2));
        RCLCPP_INFO(this->get_logger(), "检测节点已启动，默认颜色: red");
    }
    private:
    void image_callback(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        cv::Mat cv_image;
        try
        {
            cv_image = cv_bridge::toCvCopy(msg, "bgr8")->image;
        }
        catch(cv_bridge::Exception& e)
        {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge 异常：%s", e.what());
            return;
        }
        
        cv::Mat hsv, mask;
        cv::cvtColor(cv_image, hsv, cv::COLOR_BGR2HSV);//将图片转入hsv通道处理

        //开始进行颜色检测
        if (target_color_ == "red")
        {
            cv::Mat m1, m2;
            cv::inRange(hsv, cv::Scalar(0, 120, 70), cv::Scalar(10, 255, 255), m1);
            cv::inRange(hsv, cv::Scalar(170, 120, 70), cv::Scalar(180, 255, 255), m2);
            mask = m1 + m2;
        }
        else if (target_color_ == "green")
        {
            cv::inRange(hsv, cv::Scalar(40, 40, 40), cv::Scalar(80, 255, 255), mask);
        }
        else if (target_color_ == "blue")
        {
            cv::inRange(hsv, cv::Scalar(100, 150, 0), cv::Scalar(140, 255, 255), mask);
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "未知颜色: %s", target_color_.c_str());
            return;
        }

        std::vector<std::vector<cv::Point>> counter_;//声明画框
        cv::findContours(mask, counter_, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
        
        for(const auto& cnt : counter_)
        {
            double area = cv::contourArea(cnt);
            if(area > 500)
            {
                cv::Rect rect = cv::boundingRect(cnt);
                cv::rectangle(cv_image, rect, cv::Scalar(0, 255, 0), 2);
                cv::putText(cv_image, target_color_, cv::Point(rect.x, rect.y - 10),
                            cv::FONT_HERSHEY_SIMPLEX, 0.9, cv::Scalar(0, 255, 0), 2);

                auto result = std_msgs::msg::String();
                result.data = "颜色:" + target_color_ +
                              " 位置:(" + std::to_string(rect.x) + "," + std::to_string(rect.y) + ")" +
                              " 尺寸:(" + std::to_string(rect.width) + "x" + std::to_string(rect.height) + ")";
                result_pub_->publish(result);
                RCLCPP_INFO(this->get_logger(), "检测到方块: %s", result.data.c_str());
            }
        }
        auto out_msg = cv_bridge::CvImage(msg->header, "bgr8", cv_image).toImageMsg();
        image_pub_->publish(*out_msg);
    }

    void set_color_callback(
        const std::shared_ptr<color_detect::srv::SetColor::Request> request,
        std::shared_ptr<color_detect::srv::SetColor::Response> response)
    {
        target_color_ = request->color;
        response->success = true;
        response->message = "颜色已切换为: " + target_color_;
        RCLCPP_INFO(this->get_logger(), "颜色切换为: %s", target_color_.c_str());
    }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr image_pub_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr result_pub_;
    rclcpp::Service<color_detect::srv::SetColor>::SharedPtr service_;
    std::string target_color_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ColorDetector>());
    rclcpp::shutdown();
    return 0;
}