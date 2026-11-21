/**************************************************Array of Structure**********************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {

int i;	
	
	struct student
	{
		int roll;
		char name[21];
		int age;
		char class[8];		
	}s[5];
	
	
for(i=0;i<2;i++)
{
	printf("\n");
   printf("Enter the roll no of Student[%d]:",i);
   scanf("%d",&s[i].roll);
   
   printf("Enter the name of Student[%d]:",i);
   scanf("%s",&s[i].name);
   
   printf("Enter the age of Student[%d]:",i);
   scanf("%d",&s[i].age);
   
   printf("Enter the class of Student[%d]:",i);
   scanf("%s",&s[i].class);	
	
	
}


for(i=0;i<2;i++)
{
   printf("\nRoll no of Student[%d]:%d\n",i,s[i].roll);
   
   printf("\nName of Student[%d]:%s\n",i,s[i].name);
   
   
   printf("\nAge of Student[%d]:%d\n",i,s[i].age);
   
   printf("\nClass of Student[%d]:%s\n",i,s[i].class);
	
	
}
	
	
	
	
	
	
	return 0;
}
