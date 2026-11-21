#!/bin/bash

#Function to check whether file exits or not 
check_file()
{
    # $1 is first argument passed to function
    local file=$1

    if [ -f "$file" ];
    then
       echo "$file exist"
    else
      echo "$file not exist"
    fi
}


show_message()
{
  echo "Checking file"
}

#Main part of script starts here
show_message

check_file "/etc/host.conf"
check_file "/etc/abc"
