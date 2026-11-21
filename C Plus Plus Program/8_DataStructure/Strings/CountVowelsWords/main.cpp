#include <iostream>
#include <string.h>

char data[] = "This is DS example";


void CountVowels(char *data)
{
	unsigned int totVowels=0;
	unsigned int consonants =0;
	
	for(unsigned int i=0;i<strlen(data);i++)
	{
		if(data[i]=='A' || data[i]=='E' || data[i]=='I' || data[i]=='O' || data[i]=='U' || \
		   data[i]=='a' || data[i]=='e' || data[i]=='i' || data[i]=='o' || data[i]=='u')
		{
			totVowels++;
		}
		else if((data[i]>=65 && data[i]<=90) || (data[i]>=97 && data[i]<=122))
		{
		     consonants++;	
		}
	}
	
	printf("Total Vowels:%u Total consonants:%u\r\n",totVowels,consonants);
}

void countWords(char *data)
{
	unsigned int totalWords=1;
	
	
	for(unsigned int i=0;i<strlen(data);i++)
	{
	//	printf("Char:%c Hex Value:0x%X\r\n",data[i],data[i]);
		if(data[i]==0x20 && data[i-1]!=0x20)  // Hex value of space is 0x20
		{
			totalWords++;
		}
	}
	
	printf("Total Words:%u\r\n",totalWords);
	
	
}

int main(int argc, char** argv) {
	
	CountVowels(data);
	countWords(data);
	
	return 0;
}
