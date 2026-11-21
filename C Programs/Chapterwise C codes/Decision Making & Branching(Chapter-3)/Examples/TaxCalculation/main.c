/****************************************Program to calculate Tax on Income***********************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	float income,tax;
	
	printf("Enter the value of income:");
	scanf("%f",&income);
	
	if(income<=50000)  tax=0;						// tax upto income 50000 is 0 i.e 0%
	else if(income<=60000)  tax=(income-50000)*0.1;		// tax upto income 60000 is 0.1	i.e 10%
	else if(income<=120000)  tax=(income-60000)*0.2+1000;		// tax upto income 120000 is 0.1i.e 20%
	else if(income>120000)  tax=(income-120000)*0.3+13000;	// tax upto income above 120000 is 0.1i.e 30%
	
	printf("Tax is %f",tax);
	
	return 0;
}
