#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  void fn1();    // function declartion;
	  void fn2();
     void(*pointer[])()={fn1,fn2};   // array of pointer point to function
     
     (*pointer[0])();  // pointer point to first funtion
     (*pointer[1])();  // pointer point to second funtion

	return 0;
}

void fn1()
{
	
	printf("Function1\n");
}

void fn2()
{
	
	printf("Function2\n");
}


