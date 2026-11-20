#include <rclcpp/rclcpp.hpp>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/msg/image.hpp>

class Imagepublisher : public rclcpp::Node
{
    public:
    Imagepublisher() : rclcpp::Node("imagepublisher")
    {
        this->declare_parameter<std::string>("image_path", "");
        std::string path = this->get_parameter("image_path").as_string();

        if(path.empty())
        {
            RCLCPP_ERROR(this->get_logger(), "未指定image_path参数");
            rclcpp::shutdown();
            return;
        }

        image_ = cv::imread(path);
        if(image_.empty())
        {
            RCLCPP_ERROR(this->get_logger(), "图片读取失败：%s", path.c_str());
            rclcpp::shutdown();
            return;
        }

        publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/image_raw", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Imagepublisher::timer_callback, this));
        RCLCPP_INFO(this->get_logger(), "图片发布节点已启动，路径: %s", path.c_str());
    }

    private:
    cv::Mat image_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    void timer_callback()
    {
        auto msg = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image_).toImageMsg();
        msg->header.stamp = this->now();
        publisher_->publish(*msg);
        RCLCPP_INFO(this->get_logger(), "发布图片");
    }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Imagepublisher>());
    rclcpp::shutdown();
    return 0;
}