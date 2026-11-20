from setuptools import find_packages
from setuptools import setup

setup(
    name='color_detect',
    version='0.0.0',
    packages=find_packages(
        include=('color_detect', 'color_detect.*')),
)
