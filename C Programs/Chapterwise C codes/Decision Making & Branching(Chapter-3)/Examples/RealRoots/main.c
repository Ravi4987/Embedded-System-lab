/********************************************Program to find real roots of quadratic eqn************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	float a,b,c,root1,root2,disc;
	
Start:	printf("Enter the value of a,b and c:");			// coefficient of square of x , x and constant c
		scanf("%f%f%f",&a,&b,&c);
	
		disc=b*b-4*a*c;
	
		if(disc<0)
		{
			printf("Roots are not real\n");
			goto Start;
			
			
		}
		
		else
		{
			root1=(-b+sqrt(disc))/(2*a);				// Formula of quadratic equation
			root2=(-b-sqrt(disc))/(2*a);
			
			printf("Roots are %f and %f",root1,root2);
		}
	
	
	
	
	
	return 0;
}
