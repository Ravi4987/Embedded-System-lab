#include <iostream>
#include <stdlib.h>
#include <string.h>

char data[]="Welcome";



void ReverseStringUsingThirdArray(char *data)
{
	unsigned int len = strlen(data);
	char *arr = new char [len+1];  // 1 for null character
	unsigned int i,j;
	
	
	if(arr==NULL)
	{
		printf("Failed to get memory\r\n");
		return;
	}
	
	for(i=0,j=len-1;i<len;i++,j--)  // j=len-1 is because data[len] = '\0'
	{
		
		arr[i] = data[j];  //We will get reverse string of data array into arr
	}
	
	for(i=0,j=0;i<len;i++,j++)
	{
		data[i] = arr[j];
	}
	
	delete [] arr;
}

void ReverseStringWithoutAnyThirdArray(char *data)
{
	unsigned int i,j;
	unsigned int len = strlen(data);
	char temp;
	
	for(i=0,j=len-1;i<j;i++,j--)
	{
	//	printf("data[i]:%c data[j]:%c\r\n",data[i],data[j]);
		temp = data[i];
		data[i] = data[j];
		data[j] = temp;	
	}	
}

int main(int argc, char** argv) {
	printf("Original String:%s\r\n",data);
	ReverseStringUsingThirdArray(data);
	printf("Reverse String:%s\r\n",data);
	ReverseStringWithoutAnyThirdArray(data);
	printf("String after second reverse operation:%s\r\n",data);
	return 0;
}
