/***************************************************Pointer And Structure**********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	struct student
	{
		int roll;
		char name[21];
		
		
	};
	
	struct student s, *ptr;			// declaring structure variable and pointer
	
	ptr = &s;						// Assigining address of structure
	
	printf("Enter the roll no of student:");
	scanf("%d",&ptr->roll);
	
	printf("Enter the name of Student:");
	scanf("%s",&(*ptr).name);
	
	
/********************Accesing values*******************************************/	
	printf("\n\nRoll no of Student:%d\n",ptr->roll);
	
	printf("\nName of Student:%s",(*ptr).name);
	
	
	
/****************************Note************************************************

  member of sturucture can be aacess by pointer using two method
  
  1.  ptr->member
  
  2.  (*ptr).member




*****************************************************************************/
	
	
	
	
	
	
	
	return 0;
}
