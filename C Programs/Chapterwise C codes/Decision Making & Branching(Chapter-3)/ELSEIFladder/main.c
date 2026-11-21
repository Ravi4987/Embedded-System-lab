/****************************************************ELSE IF ladder**************************************************************/


#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int marks;
	char grade;
	
	printf("Enter the marks of student:");
	scanf("%d",&marks);
	
	if(marks>79)  grade='A';
	else if(marks>59) grade='B';
	else if(marks>49) grade='C';
	else if(marks>39) grade='D';
	
	else grade='E';
	
	printf("Grade is %c",grade);  
	
	
	
	
	
	return 0;
}
