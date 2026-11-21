/*************************************************Passing Structure To Function(Call by value method)*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>


struct student
{
	
	int roll;
	char name[21];
	
	
};



int main() {
	
	void print(struct student st);
	
	struct student s;
	
	printf("Enter the roll of Student:");
	scanf("%d",&s.roll);
	
	printf("Enter the name of Student:");
	scanf("%s",&s.name);
	
	print(s);
	
	
	
	
	
	return 0;
}


void print(struct student st)
{
	
	printf("\n\nRoll no of Student:%d\n",st.roll);
	printf("\nName of Student:%s",st.name);
	
	
	
	
	
}
