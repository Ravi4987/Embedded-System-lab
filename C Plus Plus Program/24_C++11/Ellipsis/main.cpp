#include <iostream>
#include <stdarg.h>

using namespace std;

/*
Ellipsis
• Used for defining variable argument functions
• … is used as symbol of ellipsis
• Printf and scanf of C language are example of ellipsis*/

int sum(int n,...)
{
	va_list list;
	va_start(list,n);
	
	int x = 0;
	int sum = 0;
	
	for(int i=0;i<n;i++)
	{
		x = va_arg(list,int);
		sum += x;
	}
	
	return sum;
}

int main(int argc, char** argv) {
	
	cout<<sum(3,10,20,30)<<endl;
	cout<<sum(5,1,2,3,4,5)<<endl;
	
	return 0;
}
