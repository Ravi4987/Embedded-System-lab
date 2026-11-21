#include <iostream>
using namespace std;

/*
 Default arguments functions
 Only trailing arguments can have default values therefore we must add //
defaults from right to left


int mul(int i, int j=5, int k=10); // legal
int mul(int i=5, int j);           // illegal
int mul(int i=2, int j, int k=10); // illegal
int mul(int i=2, int j=5, int k=10); // legal
*/


float value(float p, int n, float r=0.15);
void printline(char ch='*',int len=40);

int main()
{
   float amount;


   printline();
   
   amount = value(5000.00,5);
   cout << "\n Final value = " << amount << endl;

    amount = value(10000.00,5,0.30);
   cout << "\n Final value = " << amount << endl;

   printline('=');

  return 0;
}

float value(float p, int n, float r)
{
   int year = 1;
   float sum = p;

   while(year <= n)
   {
      sum = sum * (1 + r);
      year = year + 1;
   }

   return sum;
}


void printline(char ch, int len)
{

   for(int i=1;i <= len;i++)
   printf("%c",ch);

   printf("\n");
}