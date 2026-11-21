/****************************************************Program to copy content of one structure into another using user defined fuction************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Employee                     // Main Structure
{
	int id;
	int rollno;
	int name[4];
	int dept[4];
	
};

struct CEmployee  					// Structure in which data is to copy
{
	
	int cid;
	int crollno;
	int cname[4];
	int cdept[4];
	
};



int main() {
	
	int f,g;
	
	void cpy(int *sour,int *des,int bytes);
	struct Employee E={ 1,6,'R','A','V','I','R','&','D'};
	
	struct CEmployee CE;
	
	int *ptr=&E.id;

    printf("Address of id:%d\n",&E.id);
    printf("Address of rollno:%d\n",&E.rollno);
    printf("\n");
    
    printf("ptr contain Address:%d\n",ptr);
    printf("value at %d Address is:%d\n",ptr,*ptr);
    printf("\n");
    
    ptr=ptr+1;
    printf("ptr after adding 4 contain address:%d\n",ptr);
    printf("value contain at %d Address after 4 adding is:%d\n",ptr,*ptr);
    printf("\n");
    
    ptr=ptr+1;
    printf("First letter of name:%c\n",*ptr);
    printf("\n");
    
    printf("Adress of ptr:%d\n",ptr);
    printf("Adress of deoartment name:%d\n",&E.dept[0]);
    
    ptr=ptr+4;
    printf("Adress of pointer after adding 4:%d\n",ptr);
    
    printf("First letter of department name:%c\n",*ptr);
    printf("\n");
    
    printf("\n");
    printf("Another Structure After Copy \n");
    printf("\n");
    	
	cpy(&E.id,&CE.cid,12);
	printf("cid:%d\n",CE.cid);
	printf("crollno:%d\n",CE.crollno);
	
	printf("cname is:");
	for(f=0;f<4;f++)
	{
		printf("%c",CE.cname[f]);
	}
	printf("\n");
	
	
	
	printf("department name is:");
	for(g=0;g<3;g++)
	{
		
		printf("%c",CE.cdept[g]);
	}
	
	return 0;
}


void cpy(int *sour,int *des,int bytes)						// User defined fuction to copy one structure content into another
{
 
 int i;
 
 for(i=0;i<bytes;i++)
 {
 	
 	*des++=*sour++;
 	//des++;
 	//sour++;
 	
 	
	 }	
	
	
	
}



