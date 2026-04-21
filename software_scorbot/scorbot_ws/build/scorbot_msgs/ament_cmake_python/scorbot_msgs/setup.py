from setuptools import find_packages
from setuptools import setup

setup(
    name='scorbot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('scorbot_msgs', 'scorbot_msgs.*')),
)
