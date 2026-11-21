#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int v=28;
	int *p=&v;
	
	printf("Variable address:%x\n",p);
	printf("Variable valude is:%d\n",*p);	
	
	return 0;
}
