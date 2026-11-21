/**********************************************Untroduction to Structure***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define method	1

int main() {
	
	struct student				// Declaring Structure
	{
	   int roll;				// Structure membrane
	   char name[21];
	   int age;
	   char class[8];	
		
#if  method==1		
		
	}s1;					// variable
	
	s1.roll=10;
	s1.name[0]='R';	 s1.name[1]='a';	s1.name[2]='j';  s1.name[3]='e';	s1.name[4]='s';		s1.name[5]='h';	s1.name[6]='\0';
	s1.age=26;
	s1.class[0]='9';  s1.class[1]='t';	s1.class[2]='h';
	
	
#else 
	};						// variable can be declared later
	
	struct student s1={10,"Rajesh",26,"9th"};
	
#endif

	printf("Student roll is %d\n",s1.roll);		// Accessing Structure Members
	printf("Student name is %s\n",s1.name);
	printf("Student age is %d\n",s1.age);
	printf("Student class is %s\n",s1.class);
	
	
	struct student s2;			// Declaring another variable
	
		s2=s1;					// Assignning value of s1 to s2
		
	printf("\n\nAccessing Structure using Another variable\n");
	
	printf("Student roll is %d\n",s2.roll);		// Accessing Structure Members
	printf("Student name is %s\n",s2.name);
	printf("Student age is %d\n",s2.age);
	printf("Student class is %s\n",s2.class);
	
	
	printf("\nInput of Structure Member value\n");
	struct student s3;
	
	printf("Enter Student roll:");
	scanf("%d",&s3.roll);
	
	printf("Enter student name:");
	scanf("%s",&s3.name);
	
	printf("Enter student age:");
	scanf("%d",&s3.age);
	
	printf("Enter student class:");
	scanf("%s",&s3.class);
	
	
	printf("\n\nAccessing Structure using S3 variable\n");
	
	printf("Student roll is %d\n",s3.roll);		// Accessing Structure Members
	printf("Student name is %s\n",s3.name);
	printf("Student age is %d\n",s3.age);
	printf("Student class is %s\n",s3.class);
	
	
	

		
	
	
	
	return 0;
}
