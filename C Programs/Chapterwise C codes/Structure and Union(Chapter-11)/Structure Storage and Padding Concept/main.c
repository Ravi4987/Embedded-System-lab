/**********************************************************Structure Storage and Padding Concept*********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	struct student1
	{
		
		int roll;
		char name[21];
		int age;
		char class[8];
		
	}s;
	
	printf("\nAddress of First Structure Member\n");
	printf("Adress of roll is %u\n",&s.roll);
	printf("Adress of roll is %u\n",&s.name);
	printf("Adress of roll is %u\n",&s.age);
	printf("Adress of roll is %u\n",&s.class);
	
	
	struct student2
	{
		char name[21];
		char class[8];
		int roll;	
		int age;
		
	}s2;
	
	printf("\nAddress of Second Structure Member\n");
	printf("Adress of roll is %u\n",&s2.name);
	printf("Adress of roll is %u\n",&s2.class);
	printf("Adress of roll is %u\n",&s2.roll);
	printf("Adress of roll is %u\n",&s2.age);
	
	
	
	
	
	
	return 0;
}
