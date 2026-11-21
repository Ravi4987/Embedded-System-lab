#!/bin/bash

i=20
j=10

add=$(expr $i + $j)
sub=$(expr $i - $j)
mul=$(expr $i \* $j)
div=$(expr $i / $j)


echo "i=$i j=$j"
echo  "i+j:$add"
echo "i-j:$sub"
echo "i * j:$mul"
echo "i / j:$div"
