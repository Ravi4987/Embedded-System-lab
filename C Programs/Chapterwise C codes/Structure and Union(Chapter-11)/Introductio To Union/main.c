/*************************************Introductio To Union*************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define type 1

int main() {
	
	union sample
	{
		
		int x;
		float y;
		char z;
		
		
	};
	
	union sample code;
	
	printf("Address of first member is %u\n",&code.x);		// Storage area of all the members of union will be same
	
	printf("Address of 2nd member is %u\n",&code.y);
	
	printf("Address of 3rd member is %u\n",&code.z);
	
	printf("\nSize of 1st member is %d\n",sizeof(code.x));
	
	printf("Size of 2nd member is %d\n",sizeof(code.y));
	
	printf("Size of 3rd member is %d\n",sizeof(code.z));
	
	
#if  type==1
	
	code.x=10;				// In this method data get corrupted due to same storage area
	code.y=20;				//  Because of this we cant use all the member of union at same time
	code.z='A';				
	
	
	printf("\nValue of 1st member is %d\n",code.x);
	printf("Value of 2nd member is %f\n",code.y);
	printf("Value of 3rd member is %c\n",code.z);

#else
		code.x=10;				// In this case data will not get corrupted because we are using 1 member at a time
		printf("\nValue of 1st member is %d\n",code.x);
		
		code.y=20;
		printf("Value of 2nd member is %f\n",code.y);
		
		code.z='A';
		printf("Value of 3rd member is %c\n",code.z);
		
#endif
	
	
	
	
	
	
	return 0;
}
