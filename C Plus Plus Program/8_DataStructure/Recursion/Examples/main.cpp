#include <iostream>

/*First example*/
int fun1(int n)
{

	static int i = 1;
	
	if (n>=5)return n;
	
	n = n+i;
	
	i++;
	
	return fun1(n);
}

/*Second example*/
void foo (int n, int sum)
{
	int k = 0, j = 0;
	
	if (n == 0) return;
	
	k = n % 10;
	
	j = n/10;
	
	sum = sum + k;
	
	foo (j, sum);
	
	printf("%d", k);
}

/*Third example*/
int f(int &x, int c) 
{
	c--; 
	
	if (c == 0) return 1; 
	
	x = x + 1; 
	
	return f(x,c) * x;
}

/*Fourth example*/  // Typical example solve using pen and paper
int fun4 (int n)
{ 
	int x=1, k; 
	
	if (n==1) return x; 
	
	for (k=1; k<n; ++k) 
	{
			x=x + fun4(k) * fun4(n-k); 
	}
	
	return x; 
}

/*Fifth example*/ 
void count(int n) 
{
	 static int d = 1; 
	
	printf("%d", n); 
	
	printf("%d", d); 
	
	d++; 
	
	if (n > 1) count (n-1); 
	
	printf("%d", d);
} 

int main(int argc, char** argv) {
	
int a = 2048, sum = 0,p;

	printf("%d\r\n",fun1(1));  // First example execution

//foo (a, sum);		// Second example execution
//printf("%d\n", sum);

//	p=5;			// Third example execution
//	printf("%d\r\n",f(p,p));

//	printf("%d\r\n",fun4(5)); // Fourth example

   count(3);		// Fifth example
	
	
	return 0;
}


