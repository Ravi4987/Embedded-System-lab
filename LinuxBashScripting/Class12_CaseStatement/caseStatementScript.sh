#!/bin/bash

finished=0

while [ $finished -ne 1 ]
do
   echo "What is your favourite linux distribution"
   echo "Select appropriate choice"
   echo "1. Arch"
   echo "2. CentOS"
   echo "3. Debian"
   echo "4. Ubuntu"
   echo "5. Exit Script"

   read choice;

case $choice in
   1) echo "You have chosen Arch";;
   2) echo "You have chosen CentOS";;
   3) echo "You have chosen Debian";;
   4) echo "You have chosen Ubuntu";;
   5) finished=1;;
   *) echo "Not valid choice"
esac

done

echo "Thank you for using script"

