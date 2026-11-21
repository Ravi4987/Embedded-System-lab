/*************************************************Program to decide Grade of Steel according to their material*************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	float hardness, carbon, Tensile;
	int Grade;
	
	printf("Enter the hardness value, carbon content and tensile strength\n");
	scanf("%f %f %f",&hardness, &carbon, &Tensile);
	
	if(hardness>50 && carbon<0.7 && Tensile>5600)  Grade=10;
	else if(hardness>50 && carbon<0.7) Grade=9;
	else if(carbon<0.7 && Tensile>5600) Grade=8;
	else if(hardness>50 && Tensile>5600) Grade=7;
	else if(hardness>50) Grade=6;
	else if(carbon<0.7) Grade=6;
	else if(Tensile>5600) Grade=6;
	else  Grade=5;
	
	printf("Grade:%d",Grade);
	
	return 0;
}
