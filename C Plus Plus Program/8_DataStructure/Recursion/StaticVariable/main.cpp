#include <iostream>

int fun(int n)
{
	static int x;
	
	if(n>0)
	{
		x++;
		
		return fun(n-1)+x;
	}
	
	return 0;
}

int main(int argc, char** argv) {
	
	int r=0;
	
	r= fun(3);
	printf("%d\r\n",r);
	
	r= fun(3);
	printf("%d\r\n",r);
	
	return 0;
}
