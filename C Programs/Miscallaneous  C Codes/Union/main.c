#include <stdio.h>
#include <stdlib.h>



int main() {
	union student
{
	char name[10];
	int id;
	
};
	union student s1;
     
    printf("Enter the Student name:");
    scanf("%s",&s1.name);
    
    printf("Enter the Student id:");
    scanf("%d",&s1.id);
	
	printf("Student name:%s\n",s1.name);
	printf("Student id:%d",s1.id);
	
	
	return 0;
}
