/**************************************Counting Set Bits of Number*****************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int number,total,temp,arr[10],n,x;
	
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	temp=number;
	total=0;
	n=0;
	
	for(x=0;x<10;x++)
	{
		arr[x]=0;
	}
	while(temp)
	{
		
		total += temp & 0x01;
		arr[n++]=temp & 0x01;
		
		temp=temp>>1;
		
	}
	
	printf("\nNumber in Binary Form:");
	for(x=n;x>=0;x--)
	{
		
	  printf("%d",arr[x]);	
		
	}
	
	printf("\n\n");
	
	printf("Total no. of Set bits is %d",total);
	
	
	
	
	
	
	return 0;
}
