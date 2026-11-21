#In scripting we can declare variable simple as below there is no complex syntax

myname="Ravi"
i=50

#To reference variable use $ sign as below

echo $i

#In echo command use double quotes to reference variable inside string and single to print as it is

echo "My name is $myname"

echo 'My name is $myname'

#You can save output of any command in variable as below just have to use $ with () parenthesis
files=$(ls)

echo $files

#You can reference environment variable which is pre-defined by the system. Use below command to check environment varibles
env

#Environment varibles using in UPPER case so declare your variable in lower case that is best practice


