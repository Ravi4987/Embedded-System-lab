/****************************************Program to convert tempreture into different unit****************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define  celsiusconver  1

int main() {
	
	int fahrenheit;
	float celsius;
	
#if	celsiusconver
	printf("Enter the tempreture in Fahrenheit:");
	scanf("%d",&fahrenheit);
	
	celsius=5.0/9.0*(fahrenheit-32.0);
	
	printf("Equiavalent celsius tempreture is %f",celsius);

#else
 	printf("Enter the tempreture in celsius:");
	scanf("%f",&celsius);
	
	fahrenheit=(9.0/5.0*celsius)+32;
	
	printf("Tempreture in Fahrenheit is : %d",fahrenheit);

#endif
	
	return 0;
}
