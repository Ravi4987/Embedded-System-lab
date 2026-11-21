/****************************************Program to calculate to convert distances into different units*****************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int distance;
	
	float m,ft,inch;
	
	printf("Enter the distance(Km):");
	scanf("%d",&distance);
	
	m=1000*distance;
	ft=3280.8399*distance;
	inch=39370.0787*distance;
	
	printf("Distance in meter:%f\n",m);
	printf("Distance in feet:%f\n",ft);
	printf("Distance in inches:%f\n",inch);
	
	
	return 0;
}
