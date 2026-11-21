/*************************************************Program to study relational operaters**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x=10,y=20,a=50,b=90;
	int ex1,ex2,ex3,ex4,ex5,ex6;
	
	ex1=x<y;
	ex2=x+y<y;
	ex3=(x==10)&&(y<a);
	ex4=x*a==500;
	ex5=(y!=20)||(b>x);
	
	printf("value of ex1:%d\n",ex1);
	printf("value of ex2:%d\n",ex2);
	printf("value of ex3:%d\n",ex3);
	printf("value of ex4:%d\n",ex4);
	printf("value of ex5:%d\n",ex5);
	
	return 0;
}
