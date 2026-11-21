#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i=0; float f=0; char c=0;
	
	i=25.5;
	
	f=i;
	
	printf("Float value after assigning it to integer value:%f\n",f);
	
	i=65;              //  Ascii value of 'A' is 65
	
	c=i;
	
	printf("Char value after assigning it to integer value:%c\n",c);
	
	c='B';
	
	i=c;
	
	printf("integer value after assigning it to char value:%d\n",i);
	
	f=54.6;
	
	i=f;
	
	printf("Integer value after assigning it to float value:%i\n",i);
	
	f=67.5;
	
	c=f;
	
	printf("Char value after assigning it to float value:%c\n",c);
	
	
	
	return 0;
}
