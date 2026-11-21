/*****************************************Passing Structure To Function(Call By Reference Method)*****************************************************************/
#include <stdio.h>
#include <stdlib.h>



struct Student
{
	int roll;
	char name[21];
	
	
};

int main() {
	
	
	void read_data(struct Student *st);
	
	struct Student s;
	
	read_data(&s);
	
	printf("\n\nRoll no of Student:%d\n",s.roll);
	printf("\nName of Student:%s",s.name);
	
	
	
	
	
	return 0;
}

void read_data(struct Student *st)
{	
	
	printf("Enter the Roll no of Student:");
   scanf("%d",&st->roll);
   
   printf("Enter the Name of Student:");
   scanf("%s",&st->name);
}



  


