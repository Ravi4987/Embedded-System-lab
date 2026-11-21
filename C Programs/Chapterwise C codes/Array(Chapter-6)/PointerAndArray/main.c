/*****************************************Program to study pointer with array********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[]={10,20,30,40,50};
	
	int i;
	
	int *j;				// Pointer to be of same data type as array
	
	j=a;				// this statment will give address of a[o]
	
//  or

//   j=&a[0];	
	
/***************************************************************************************************************

    if address of a[0] is 2293280 then pointer will get this starting address by j=a
	
	if we increment pointer(i.e j++) then next address point by pointer is 2293280 because
	
	pointer is of int type 


****************************************************************************************************************/	
	for(i=0;i<5;i++)
	{
		
		printf("\nAddress of a[%d] using pointer is %u",i,j);  // Address of array stored in pointer
		
		printf("\nValue at Adress %u using pointer is %d\n",j,*j); /// Accessing whole array using pointer
		
		
		j++;
	}
	
	
	return 0;
}
