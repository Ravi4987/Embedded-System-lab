/***********************************************Returning Structure From Function**************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct student
{
	int roll;
	char name[21];	
	
};


int main() {
	
	struct student read_data();
	
	struct student st;
	
	st = read_data();
	
	printf("\n\nRoll no of student:%d\n",st.roll);
	printf("\nName of Student:%s",st.name);
	
	
	
	return 0;
}

struct student read_data()
{
	
	struct student s;
	
	printf("Enter the Roll no of student:");
	scanf("%d",&s.roll);
	
	printf("Enter the name of student:");
	scanf("%s",&s.name);
	
	return s;
	
	
	
	
	
	
}
