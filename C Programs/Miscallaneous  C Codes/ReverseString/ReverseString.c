/****************************************
Program to reverse a string 
*******************************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define SWAP(a,b)   do{ *(a) = *(a) ^ *(b);  \
						*(b) = *(a) ^ *(b);   \
						*(a) = *(a) ^ *(b);   \
						}while(0);

char str[] = "Embedded";

void RevStrUsingLoop(char *pStr)
{
	uint8_t len = 0;
	uint8_t loop = 0;
	char temp;
	
	while(pStr[len++]!='\0');
	
	len--;  // Remove null character
	len--;  // Array index start from 0
	
	
	while(loop < len)
	{
		temp = pStr[len];
		
		pStr[len] =  pStr[loop];
		
		pStr[loop] = temp;
		
		loop++;
		len--;
	}	
}

void RevStringUsingSwap(char *pStr)
{
	uint8_t len = 0;
	uint8_t loop = 0;
	char temp;
	
	while(pStr[len++]!='\0');
	
	len--;  // Remove null character
	len--;  // Array index start from 0
	
	while(loop < len)
	{
		
		SWAP(pStr+len,pStr+loop);
		
		loop++;
		len--;
	}
}

void RevStrUsingRecursive(char* Start,char* End)
{
   if(Start >= End)
   {
   	  return;
   }
  
	SWAP(Start,End);
	
	Start++;
	End--;
	
	RevStrUsingRecursive(Start,End);
}

int main(int argc, char *argv[]) {
	
	char *Start,*End;
	uint8_t len = 0;
	
	printf("String before reverse:%s\r\n",str);
	
	//RevStrUsingLoop(str);
	//RevStringUsingSwap(str);
	
	while(str[len++]!='\0');
	len--;
	
	Start = str;
	End   = str + len - 1;
	
	RevStrUsingRecursive(Start,End);
	
	printf("String after reverse:%s\r\n",str);
	
	
	return 0;
}
