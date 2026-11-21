/***************************************************Putc function********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char c;
	int ic;
	
	FILE *fp;
	
	fp= fopen("TestFile.txt","w");
	
	if(fp==NULL)
	{
		
		printf("\nError in file opening");
		exit(0);
		
	}
	
	printf("Enter text then press enter and Press ^Z at end\n");

	
	
	while((ic=getchar()) != EOF) 
	{
	

		if(ic==EOF)  break;
			
		
	//	putc(c,fp);
	putc(ic,fp);
	}
	//	putc('A',fp);
	
	printf("\nFile Closed\n");
	fclose(fp);
	
	
	
	
	return 0;
}
