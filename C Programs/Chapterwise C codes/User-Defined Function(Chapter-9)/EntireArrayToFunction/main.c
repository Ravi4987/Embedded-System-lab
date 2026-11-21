/****************************************Passing entire to a function**************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a[20],big,i,n;
	
	printf("Enter total number of element:");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
		
	}
	
	big=largest(a,n);				// Here we giving only base address of array through which entire array will be read
	
	printf("largest number is %d",big);
	
	return 0;
}


largest(int *add,int n)				// User defined function to find largest element of array
{
	int large,j;
	
	large=*add;
	
	for(j=0;j<n;j++)
	{
		if(large<*add) large=*add;
		
		add++; 
		
	}
	
	return(large);
	
	
}
