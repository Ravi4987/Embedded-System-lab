/**************************************************Equation Solve Using Recursion****************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a,n;
	
	int Func(int val,int t);
	
	
	printf("Enter the value of a and n:");
	scanf("%d%d",&a,&n);
	
	
	printf("Total Value:%d",Func(a,n));
	
	
	
	
	
	return 0;
}


int Func(int val,int t)
{
	int res =1,total,i;
	
	
	if(t==0)
	{
		return total;
	}
	
	else
	{
		
		for(i=t;i>0;i--)
		{
			res *= val;
			
		}  
		
		total=res;
	
	
		
		return (total+Func(val,t-1));
		
	}
	
	
	
	
}



