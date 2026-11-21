#!/bin/bash

myvar=1

#le is less than or equals to
while [ $myvar -le 10 ]
do 
  echo $myvar
  myvar=$(($myvar + 1))
  sleep 0.5
done
