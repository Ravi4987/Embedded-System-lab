/************************************************getc_Function***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX_Char_Read  10

FILE *fp;
unsigned char buffer[100];

unsigned short int readfile(unsigned char *buf, unsigned int NOB);

int main() {
	
	char c;
	
	unsigned short Tot_char_read;
		
	fp = fopen("Text.txt","r");
	
	if(fp==NULL)
	{
		
		printf("\nError in file opening\n");
		exit(0);
	}
	
	
	
	while(!feof(fp))
	{		
		Tot_char_read += readfile(buffer,MAX_Char_Read);
		
		
	}
	
	

	
	fclose(fp);
	
	
	return 0;
}

unsigned short readfile(unsigned char *buf, unsigned int NOB)
{
	unsigned int nob;
	
	
	for(nob=0;nob<NOB && !feof(fp);nob++)
	{
	
		
		*buf++ = fgetc(fp);
	}
	
	return nob;
	
		
}
	
	
	
	
	





