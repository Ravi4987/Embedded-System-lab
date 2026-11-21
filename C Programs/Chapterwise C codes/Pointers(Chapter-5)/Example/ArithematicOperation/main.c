/************************************************Aritematic operations on pointer*******************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,j=30;
	
	int *pi,*pj=&j;
	
	*pj=j+10;
	
	
	pi=pj;
	
	*pi=i+j;
	
	
	printf("Address of variable j is %d\n",&j);
	
	printf("Address of variable i is %d\n",&i);
	
	printf("Value of Pointer pi is %d\n",pi);
	
	printf("Value of Pointer pi after adding 2 is %d\n",pi+2);
	
	printf("Value of Pointer pj is %d\n",pj);
	
	printf("Value of variable pointer by Pointer pi is %d\n",*pi);
	
	printf("Value of i is %d\n",i);
	
	printf("Value of variable pointer by Pointer pj is %d\n",*pi);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
