/***************************************H.C.F of three numbers****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define Recursion 0

int main() {
	int a,b,c,r1,result;
	
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	
	r1=hcf(a,b);
	result = hcf(r1,c);
	
	printf("H.C.F:%d",result);
	
	
	
	return 0;
}



#if		Recursion

hcf(int m, int n)
{
	if(n>m)  return hcf(n,m);
	
	else
	{
		if(n==0) return m;
		
		else return(hcf(n,m%n));
		
		
	}
	
	
	
	
	
	
}



#else

hcf(int x,int y)
{
	int rem=1,div,dvend;
	
	if(x>y)
	{
		dvend = x;
		div =  y;
		
	}
	
	
	else
	{
		dvend = y;
		div =  x;
		
	}
	
	rem = dvend % div;
	
	while(rem!=0)
	{
		
		dvend = div;
		div = rem;
		rem = dvend % div;
		
		
	}
	
	return div;
		
	
	
	
	
	
}

#endif
