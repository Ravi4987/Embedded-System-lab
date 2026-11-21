/*************************************************Typedef With Structure*******************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct  			/// You can skip the declaration of name of structure
{
	int roll;
	char name[21];
	
}status;


typedef struct Employee		// Here name is declared
{
	int id;
	char name[21];
	
	
}data;


struct teacher
{
  int id;
  char name[21];	
	
	
};

typedef struct teacher  teacherData;		// You can use typedef after structure intialisation

int main() {
	
	status s1={13,"Ravi"};
	data d1={45,"Ram"};
	teacherData t1={56,"Akansha"};
	
	printf("Roll of Stuent:%d\n",s1.roll);
	printf("Name of Student:%s\n",s1.name);
	
	printf("\n\nId of Employee:%d\n",d1.id);
	printf("Name of Employee:%s\n",d1.name);
	
	printf("\n\nId of Teacher:%d\n",t1.id);
	printf("Name of Teacher:%s\n",t1.name);
	
	
	
	
	
	
	
	return 0;
}
