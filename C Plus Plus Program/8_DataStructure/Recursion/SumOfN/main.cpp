#include <iostream>

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return sum(n-1)+n;
	}	
}

int main(int argc, char** argv) {
	
	printf("Sum:%d",sum(5));
	
	return 0;
}
