#include <stdio.h>
#include <stdlib.h>



int main() {
	int a[10]={10,20,30,40,50};
	
	int size,i,num,pos;
	
	size = sizeof(a)/sizeof(int);
	
	printf("Enter the number to be inserted in array:");
	scanf("%d",&num);
	
start:	printf("Enter the position at which number to be inserted(1 to 10):");
	scanf("%d",&pos);
	
	if(pos>size||pos==0)
	{
		printf("Wrong position Enter again\n");
		goto start;
		
	}
	
	printf("\n\nOriginal Array\n");
	for(i=0;i<size;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}
	
	if(pos==size)  a[pos-1]=num;				// if position is last index of array then no element shifting is needed
	
	else
	{
		
		for(i=size-1;i>=pos-1;i--)				// if position is less than last index of array then element after position of number to 
		{										//  insterted is shift by one place for e.g a[7] shift to a[8]
			a[i]=a[i-1];
			
			
		}
		
		a[pos-1]=num;
		
	}
	
	printf("\n\nArray after inserting number\n");
	for(i=0;i<size;i++)
	{
		
		printf("\na[%d]:%d",i,a[i]);
		
	}
	
	
	
	
	return 0;
}
