/*****************************************Program to evaluate series of sin******************************************

										Series is
										
						Sinx.Sinx= x-x^3/3!+x^5/5!-x^7/7!


***********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int n,i,j,fact=1,sign,m=1;
	
	float x,result;
	
	printf("Enter the value of x:");
	scanf("%f",&x);
	
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		
		if(i==1){
			
			fact=1;
			result=x/fact;
			m +=2;
			continue;
			
		}
		
		
		if(i%2==0)  sign=-1;
		
		else 			sign=+1;
		
		
	  //  fact=i*(i-1)*fact;						// for factorial calculation
	
		fact = m*(m-1)*fact;
		
		for(j=1;j<m;j++)						// for power calculation
		{
			
			x *= x;
			
		}
		
		
		printf("\n");
		printf("sign:%d\n",sign);
		printf("power of x:%f\n",x);
		printf("fact value:%d\n",fact);	
	   result  += (sign*x)/fact;
		
		m +=2;
		
	}
	
	

	printf("Result:%f",result);
	
	
	
	return 0;
}
