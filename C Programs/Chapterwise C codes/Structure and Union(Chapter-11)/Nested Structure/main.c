/**************************************************Nested Structure***************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	struct student
	{
		int roll;
		char name[21];
		
		struct 
		{
			int date;
			int month;
			int year;
			
		}	birthday;
		
		
	}s;
	
	
	printf("Enter the roll no of student:");
	scanf("%d",&s.roll);
	
	printf("Enter the name of student:");
	scanf("%s",&s.name);
	
	printf("Enter the date of birthday: ");
	scanf("%d",&s.birthday.date);
	
	printf("Enter the mont of birthday: ");
	scanf("%d",&s.birthday.month);
	
	printf("Enter the year of birthday: ");
	scanf("%d",&s.birthday.year);
	
	/***********************Accesing value***********************************/
	
	printf("\n\nRoll no. of student:%d\n",s.roll);
	
	printf("\n\nName  of student:%s\n",s.name);
	
	printf("\n\nBirth date of student:%d\n",s.birthday.date);
	
	printf("\n\nBirth month of student:%d\n",s.birthday.month);
	
	printf("\n\nBirth year of student:%d\n",s.birthday.year);
	
	
	
	
	return 0;
}
