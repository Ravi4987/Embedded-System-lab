#include <iostream>

int F[15];

/* Iteratve method*/
int fib(int n) 
{
 int t0=0,t1=1,s=0,i;

 if(n<=1) return n;

 for(i=2;i<=n;i++)
 {
	 s=t0+t1;
	 t0=t1;
	 t1=s;
 }

 return s;
}

/* Recursive method but in below function there is repetetive function call for same value 
So this is excessive recursive call for better understanding draw recursion tree
*/
int rfib(int n)
{
 if(n<=1)return n;
 return rfib(n-2)+rfib(n-1);
}


/*This is also recursion here we are storing results into one array to avoid repetetive call*/
int mfib(int n)
{
 if(n<=1)
 {
 F[n]=n;
 return n;
 }
 else
 {
	 if(F[n-2]==-1)
	 {
	 	F[n-2]=mfib(n-2);
	 }
	 
	 if(F[n-1]==-1)
	 {
	 	F[n-1]=mfib(n-1);
	 }
	 
	 F[n]=F[n-2]+F[n-1];
	 
	 return F[n-2]+F[n-1];
 }
}





int main(int argc, char** argv) {
int i;
	for(i=0;i<15;i++)
	{
		F[i] = -1;
	}
	
	printf("Result using Iterative:%d\r\n",fib(6));
	printf("Result using normal Recursive:%d\r\n",rfib(6));
	printf("Result using memory Recursive:%d\r\n",mfib(6));	
	return 0;
}
