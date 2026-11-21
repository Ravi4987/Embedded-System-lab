/******************************************************H.C.F Using Recursion****************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b;
	
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	printf("H.C.F is %d",hcf(a,b));
	
	
	
	
	return 0;
}

hcf(int m, int n)
{
	if(n>m)  return hcf(n,m);
	
	else
	{
		if(n==0) return m;
		
		else return(hcf(n,m%n));
		
		
	}
	
	
	
	
	
	
}
