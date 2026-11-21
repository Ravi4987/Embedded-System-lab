/**************************************************BIT FIELD IN STRUCTURE*********************************************************************/
#include <stdio.h>
#include <stdlib.h>

/***********************************************************************************************************

		Structure about employee have following members
		1. name (max 20 character)
		2. Sex (male or female)			it needs one bit(i.e 1=Male or 0=Female) only to store data    
		3. marital Status (single,married,divorced or widowed )			it needs 2 bit(i.e 0=single,1=married,2=divorced,3=widowed) to store data
		4. age (less than 60)			it needs 6 bit(i.e 2^6=64)

************************************************************************************************************/


int main() {
	
	
	struct employee
	{
		char name[21];
		unsigned sex:1;				// bit field to avoid wastage of memory
		unsigned marital_status:2;
		unsigned age:6;				
		
		
		
	};
	
	
	struct Employee
	{
		char name[21];
		unsigned int sex;
		unsigned int marital_status;
		unsigned int age;
		
		
	};
	
	struct Employee E;
	
	
	struct employee e ={"Rakesh",0,2,63};
	
	printf("Size of Structure with bit field:%d\n",sizeof(e));
	
	printf("Size of Structure without bit field:%d",sizeof(E));
	
	
/*****************************************Note*******************************************************
					1. Scanf function cannot be used to read a bit field since 
						the address of bit field cannot be obtained
						
					2.  Array of bit field is not allowed.
					
					3. A pointer cannot be used to access bit field.
					
					4. The sizeof operator cannot be applied on bit field.




*************************************************************************************************/
	
	
	
	return 0;
}
