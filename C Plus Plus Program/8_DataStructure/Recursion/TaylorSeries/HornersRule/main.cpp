#include <iostream>

double e(int x, int n)  // Horners Rule
{
	static double s;
	if(n==0)
	{
		return s;
	}
	else
	{
		
		s = 1+s*x/n;
		return e(x,n-1);
	}
}

double Ie(int x, int n)  //Taylor Series Iterative method
{
 double s=1;
 int i;
 double num=1;
 double den=1;

	 for(i=1;i<=n;i++)
	 {
		 num*=x;
		 den*=i;
		 s+=num/den;
	 }
 return s;
}



int main(int argc, char** argv) {
	printf("%lf\r\n",e(1,10));
	printf("%lf\r\n",Ie(1,10));
	
	return 0;
}
