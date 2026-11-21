/*********************************************Program to copy content of one buffer to another********************************************************************/

#include <stdio.h>
#include <stdlib.h>

void Copybuffer(char* sour,char* des,int numberofbytes)
{
 int j;
     for(j=0;j<numberofbytes;j++)
	 {
	 	
	     *des++ = *sour++; 	
	 	
	 }	
		
}	


int main() {
	
	char SourceBuffer[12]="Electronics";
	char DestinationBuffer[12];
	int i;
	
//	int intSource[4]={1,2,3};
//	int intDes[4];
	
void Copybuffer(char* sour,char* des,int numberofbytes);

  	
	Copybuffer(&SourceBuffer[0],&DestinationBuffer[0],12);
	
	printf("\n");
	printf("Destination Buffer:");
	
	for(i=0;i<12;i++)
	{
		
		printf("%c",DestinationBuffer[i]);
		
	}
	
		
	
	
	
	
	return 0;
}
