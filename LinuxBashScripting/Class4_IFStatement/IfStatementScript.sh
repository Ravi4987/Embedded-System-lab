#!/bin/bash


i=20
commandName=htop


# -eq means equal to
if [ $i -eq 20 ]
then 
    echo "The condition is true."
fi

if [ $i -eq 30 ]
then
    echo "Variable is equal to 30"
else
   echo "Variable is eqaul to $i"
fi
#fi is closing if statement

if [ $i -gt 10 ]
then
   echo "Variable is greater than 10"
else
   echo "Variable is not greater than 10"
fi


if [  -f myfile1 ]
then 
   echo "myfile1 exists"
else
   echo "myfile1 does not exist"
fi


#which command we can use in console to check wether command exist or not you can /usr/bin/ also
#Check for command htop if it does not exist install it
#There is no bracket because it is not test command you can check list of check command using command 'man test'
if command -v $commandName
then
   echo "$commandName exist lets run it"
else
   echo "$commandName does not exist lets install it"
   sudo apt update && sudo apt install -y $commandName
fi

#Run command at last
$commandName
