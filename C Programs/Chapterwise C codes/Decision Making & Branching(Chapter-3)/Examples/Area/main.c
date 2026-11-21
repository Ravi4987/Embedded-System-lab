/******************************************************Program to calculate area of rectangle, circle, triangle**************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	int choice;
	float length, breadth, radius, firstside, secondside, thirdside, area,semi;
	
Start:	printf("Enter the choice 1 for Rectangle 2 for Circle 3 for Trianlgle:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the length and breadth of Rectangle\n");
				scanf("%f%f",&length,&breadth);
				area=length*breadth;
				printf("Area of Rectangle is %f",area);
				break;
				
			case 2:
				printf("Enter the radius of circle:");
				scanf("%f",&radius);
				area=3.14*radius*radius;
				printf("Area of Circle is %f",area);
				break;
				
			case 3:
				printf("Enter the three sides of the triangle\n");
				scanf("%f%f%f",&firstside,&secondside,&thirdside);
				semi=(firstside+secondside+thirdside)/2;
				area=sqrt(semi*(semi-firstside)*(semi-secondside)*(semi-thirdside));
				printf("Area of Triangle is %f",area);
				break;
				
			default:
				printf("Wrong number entered");
				goto Start;
		
		}
		
	
	return 0;
}
