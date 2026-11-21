/****************************************fputc function***********************************************************/
#include <stdio.h>
#include <stdlib.h>

#define EOL 13  /* Ascii value of EOL */b

int main() {
	
	char c;
	
	FILE *fp;
	
	fp=fopen("TestFile.txt","w");
	
	if(fp==NULL)
	printf("\nError in file opening");
	
	printf("\nEnter text and press enter \n");
	
	do
	{
		c=getche();
		
		fputc(c,fp);
		
	}while(c != EOL);
	
	fclose(fp);
	
	
	
	
	return 0;
}
