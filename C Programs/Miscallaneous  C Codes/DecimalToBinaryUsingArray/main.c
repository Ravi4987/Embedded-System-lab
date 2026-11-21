/******************************************Program to convert Decimal Number to Binary using Array*************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int dec,r[20],i,j;
	
	
	printf("Enter decimal Number:");
	scanf("%d",&dec);
	
	
	r[0]=dec%2;
	dec=dec/2;
	i=1;
	
	while(dec>0)
	{
		
	  	r[i]=dec%2;
	dec=dec/2;
	  i++;
		
		
		
	}
	
//	printf("%d\n",i);
	printf("Equiavlent Binary :");
	
	
	for(j=i-1;j>=0;j--)
	{
		
		printf("%d",r[j]);
	}
	
	
	
	
	
	
	
	return 0;
}
