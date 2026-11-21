#include <iostream>

//#define HEAD


#ifdef HEAD
void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		printf("%d\r\n",n);
	}
	
}
#else  // Tail
void fun(int n)
{
	if(n>0)
	{
		printf("%d\r\n",n);
		fun(n-1);	
	}
	
}
#endif

int main(int argc, char** argv) {
	fun(3);
	return 0;
}
