/**********************************************Program to check whether a number is palindrome or not**********************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int num,digit,temp,rnum=0;
	
	printf("Enter digit:");
	scanf("%d",&num);
	
	temp=num;
	
	
	do
	{
		digit=temp%10;
		temp=temp/10;
		rnum=rnum*10+digit;
		
	}
	while(temp>0);
	
	if(rnum==num)   printf("Number is palindrome");
	else 			printf("Number is not palindrome");
	
	
	
	return 0;
}
