/***********************************************Define Pre-Processer***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define square(x)  (x)*(x)

#define Bool(val)   (val==1 || val>0)?1:0

int main() {
	float num;
	int flag;
	
	printf("Enter the number:");
	scanf("%f",&num);
	
	printf("Square:%f\n",square(num));
	
	printf("Enter the value of flag:");
	scanf("%d",&flag);
	
	printf("Flag status:%d",Bool(flag));
	
	
	
	return 0;
}
