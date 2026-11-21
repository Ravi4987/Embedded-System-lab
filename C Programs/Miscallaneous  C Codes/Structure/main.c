#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	struct Employee 
	{
		char name[10];
		int id;
	};
	
	struct Employee s1;
    struct Employee *ptr;  // pointer in structure
    ptr=&s1;
	//struct Employee s1= {  "Raj",1};
	//s1.name="Raj";
	//s1.id=1;
	printf("Enter Employee name:");
	scanf("%s",&s1.name);
	printf("Enter Employee id:");
	scanf("%d",&s1.id);
	printf("Employee name:%s\n",s1.name);
	printf("Employee id:%d\n",s1.id);
	
	// Acessing structure member using pointer
	printf("Employee name using pointer is %s\n",ptr->name);
	printf("Employee roll no using pointer is %d\n",ptr->id);
	
	
	
	
	
	return 0;
}
