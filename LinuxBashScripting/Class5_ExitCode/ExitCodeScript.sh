#!/bin/bash

#First uninstall htop if already installed htop and then uncomment below
#package=htop

#Assign some random thing to package variable so that installation fails
#Comment out below if you uncomment above variable
package=notExist

#save output of below command in logs
sudo apt install $package >> package_install_results.log


if [ $? -eq 0 ]
then 
   echo "Package installation was succesfull"
   echo "The new command is available here"
   which $package
else
   echo "$package installation was not succesfull" >> package_install_failure.log
fi
