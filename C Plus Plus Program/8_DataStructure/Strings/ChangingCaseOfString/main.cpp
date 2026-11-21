#include <iostream>

char data[]="Welocome";


unsigned int strLength(char *data)
{
  unsigned int i=0;	
	for(i=0;data[i]!=0;i++);
	
	return i;
}


void ChangingCase(char *data)
{
	unsigned int len = strLength(data);
	
	for(unsigned int i=0;i<len;i++)
	{
	   if((data[i]>= 65 ) && (data[i]<=90))  // Ascii code of A is 65 and Z is 90	
	   {
	   	   data[i] += 32;				// Ascii code of a is 97(65+32) 
	   }
	   else if((data[i]>= 'a' ) && (data[i]<='z'))
	   {
	   	    data[i] -= 32;
	   }
	}
	
}

int main(int argc, char** argv) {
	
	printf("length:%u\r\n",strLength(data));
	
	ChangingCase(data);
	
	printf("String :%s\r\n",data);
	return 0;
}
