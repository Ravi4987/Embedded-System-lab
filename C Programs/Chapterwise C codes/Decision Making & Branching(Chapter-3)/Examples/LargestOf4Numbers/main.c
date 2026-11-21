/**************************************************Program to find largest of 4 Numbers*****************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a,b,c,d,big;
	
	printf("Enter four numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b)
	{
				if(a>c)
				{
					if(a>d)  big=a;
					
					else      big=d;
				}
				
				else
				{
					if(c>d)  big=c;
					
					else big=d;
					
					
					
				}		
	}
	
	
	else if(b>c)
	{
	   if(b>d)  big=b;
	   else     big=d;	
	}
	
	else if(c>d)  big=c;
	
	else big=d;
	
	printf("largest number is %d",big);	
	
	return 0;
}
