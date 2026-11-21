/**********************************************Program to find H.C.F and L.C.M*********************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DO 1

int main() {
	
	int a,b,num,den,rem,HCF,LCM;
	
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		num=a;
		den=b;
		
	}
	
	else
	{
		num=b;
		den=a;	
		
	}
	

#if  DO	
    rem=num%den;
	do
	{
		
	    	num=den;
	    	den=rem;
		rem=num%den;
	}   
	
	
	while(rem!=0);  
	
#else
	
	rem=num%den;
	while(rem!=0)
	{
		num=den;
	    den=rem;
	    rem=num%den;
	}
	
#endif	
	
	HCF=den;
	
	LCM=(a*b)/HCF;
	
	
	printf("LCM:%d and HCF:%d",LCM,HCF);
	
	
	
	
	return 0;
}
