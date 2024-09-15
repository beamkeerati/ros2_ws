from setuptools import find_packages
from setuptools import setup

setup(
    name='param_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('param_interfaces', 'param_interfaces.*')),
)
