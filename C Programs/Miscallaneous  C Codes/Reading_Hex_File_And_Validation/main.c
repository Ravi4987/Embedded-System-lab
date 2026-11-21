/************************************************getc_Function***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX_Char_Read  20

FILE *fp;
unsigned char buffer[4000];

unsigned short int readfile(unsigned char *buf, unsigned int NOB);

int main() {
	
	char c;
	
	unsigned char *Read_buffer, extra_byte;
	
	unsigned short Tot_char_read,char_read;
		
	fp = fopen("STM32_APP.hex","r");
	
	if(fp==NULL)
	{
		
		printf("\nError in file opening\n");
		exit(0);
	}
	
	
	
	while(!feof(fp))
	{		
		char_read = readfile(buffer,MAX_Char_Read);
				
		extra_byte=0;
		
		while( *(buffer+(char_read-extra_byte))!='\n' && *(buffer+(char_read-extra_byte-1))!='\r' && extra_byte<50)
		{
			extra_byte++;
		}
		
		char_read=char_read-extra_byte;
		
		fp=fp-extra_byte;
		
		Tot_char_read += char_read;
		
		
		
		
		
		
		
		
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
	
	
