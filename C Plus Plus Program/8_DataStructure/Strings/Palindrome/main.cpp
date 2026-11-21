#include <iostream>
#include <stdlib.h>
#include <string.h>

char data[]="Welcome";
char data1[] = "Radar";

void changeToLowerCase(char *sStr,char *dStr)
{
	for(unsigned int i=0;i<strlen(sStr);i++)
	{
		if(sStr[i]>=65 && sStr[i]<=90)
		{
			dStr[i]=sStr[i]+32;
		}
		else
		{
		   dStr[i]=sStr[i];	
		}
	}
	
	dStr[strlen(sStr)+1]='\0';
}


void CheckPalindrome(char *data)
{
	unsigned int i,j;
	unsigned int len = strlen(data);
	char temp;
	
	char *arr = new char [strlen(data)+1];
	
	
	
	if(arr==NULL)
	{
		printf("Failed to get Memory\r\n");
		return;
	}
	
	changeToLowerCase(data,arr);
	
	for(i=0,j=len-1;i<j;i++,j--)
	{
	   if((arr[i]!=arr[j])) 
	   {
	   	  printf("String is not palindrome\r\n");
	   	  return;
	   }
	}
	printf("String is palindrome\r\n");
	
	delete [] arr ;	
}

int main(int argc, char** argv) {
	
	CheckPalindrome(data);
	CheckPalindrome(data1);

	return 0;
}
