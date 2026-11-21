/************************************************Program to find the Area of circle and rectangle****************************************************************/


#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

int main() {
	float length, breadth, radius, Rarea, Carea, perimeter;
	
	printf("Enter the length and breadth of Rectangle:");
	scanf("%f%f",&length,&breadth);
	
	printf("Enter the radius of circle:");
	scanf("%f",&radius);
	
	Rarea=length*breadth;
	Carea=pi*radius*radius;
	
	perimeter=2*pi*radius;
	
	printf("Area of Rectangle:%f  Area of Circle:%f  Perimeter of Circle:%f",Rarea,Carea,perimeter);
	 
	
	
	return 0;
}
