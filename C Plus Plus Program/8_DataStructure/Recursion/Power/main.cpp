#include <iostream>

int pow(int n,int p)
{
	int i=0,result=1;
	for(i=0;i<p;i++)
	{
		result *= n; 
	}
  return result;	
}

int rpow(int n, int p)
{
	if(p==0)
	{
		return 1;
	}
	else
	{
		return rpow(n,p-1)*n;
	}
	
}

int main(int argc, char** argv) {
	
	printf("%d\r\n",pow(2,3));
	printf("%d\r\n",rpow(2,1));
	
	return 0;
}
