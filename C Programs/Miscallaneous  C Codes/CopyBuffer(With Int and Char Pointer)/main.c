#include <stdio.h>
#include <stdlib.h>

#define Char 0


void CopyChar(unsigned char *sour,unsigned char *des,int nob)
{
	int i;
	
	for(i=0;i<nob;i++)
	{
		
		*des++=*sour++;
		
		
	}	
	
}



void CopyInt(unsigned int *sour,unsigned int *des,int nob)
{
	int i;
	
	for(i=0;i<nob;i++)
	{
		
		*des++=*sour++;
		
		
	}	
	
}




int main() {
	
	int m;
	
	int ISbuffer[3]={3,2,1};
	int IDbuffer[3];
	
	char CSbuffer[11]="Electronics";
	char CDbuffer[11];
	
//	Copy((int *)&ISbuffer[0],(int *)&IDbuffer[0],3);
	
//	Copy(&CSbuffer[0],&CDbuffer[0],11);

#if Char

	CopyChar((char *)&CSbuffer[0],(char *)&CDbuffer[0],11);	
	
	CopyChar((char *)&ISbuffer[0],(char *)&IDbuffer[0],12);				//  Notice no of bytes changed because int variabe is of 4 bytes each so for 3 bytes =3x4=12nob
	
	printf("\n");
	
#else

	CopyInt((int *)&CSbuffer[0],(int *)&CDbuffer[0],11);	
	
	CopyInt((int *)&ISbuffer[0],(int *)&IDbuffer[0],3);
	
#endif
	
//	printf("Integer Destination Buffer is %d\n",IDbuffer);

	
	printf("Char Destination Buffer is ");
	
	for(m=0;m<11;m++)
	{
		
		printf("%c",CDbuffer[m]);
		}	
	
	
	printf("\n");
	printf("\n");
	
	printf("Int Destination Buffer is ");
	
	for(m=0;m<3;m++)
	{
		
		printf("%d",IDbuffer[m]);
		}
	
	
	
	
	return 0;
}
