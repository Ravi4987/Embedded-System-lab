/******************************************To study the address of a Array**********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[]={10,20,30,40,50};
	
	int i;
	
/*************************************************************************************************
     we know that int type data takes 4 bytes in 32 bit system so if address of a[0] is
     
     2293296 then address of next element of array a[1] is 2293300 


**************************************************************************************************/
	printf("Array tutorials\r\n");
	for(i=0;i<5;i++)   
	{
		
		printf("\nAdress of element a[%d]:%u",i,&a[i]);
		
		
	}
	
	
	
	
	
	return 0;
}
