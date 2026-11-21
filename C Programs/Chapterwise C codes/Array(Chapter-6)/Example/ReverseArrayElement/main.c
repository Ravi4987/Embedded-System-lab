/***********************************************Program to reverse array element********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int A[]={10,20,30,40,50};
	
	int tempA[10];				// Array for temporary Store element of Array A
	
	int *x,*y,i;
	x=A;  y=tempA;
	int size;
	
	size= sizeof(A)/sizeof(int);
	
	//printf("%d",size);
	printf("Original Array\n");
	
	for(i=0;i<size;i++)
	printf("a[%d]:%d\n",i,A[i]);
	
	for(i=size-1;i>=0;i--)				// Assigning value of Array A into Array tempA in reverse order
	{
		*(y+4-i)= *(x+i);
	
//	printf("\nX:%d",*(x+i));
//	printf("\nY:%d",*(y+i));
		
	}

	for(i=0;i<size;i++)			// Assigning value of Array tempA into original Array A
	{
	//	*(x+i) = *(y+i);		// this method can also be used for assigning value
		*x++ = *y++;
		
	}

	
	
	printf("\n\nReverse Array\n");
	
	for(i=0;i<size;i++)
	printf("a[%d]:%d\n",i,A[i]);			
	
	return 0;
}
