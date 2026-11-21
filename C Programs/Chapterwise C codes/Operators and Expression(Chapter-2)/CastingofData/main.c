/********************************************************Program to cast one type of data into another type**********************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a,b;
	
	float m;
	
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	
	m=a/b;                    ///  It will lost decimal part for example a=2 b=4 then m=0.0000 instead of 0.50000
	printf("Before casting of data m is equal to %f\n",m);
	
	m=(float) a/b;			//  it will convert the result into float type 
	printf("After casting of data m is equal to %f",m);
	
	
	
	return 0;
}
