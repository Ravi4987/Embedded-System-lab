#include <iostream>
using namespace std;

void increment(int &a, int &b);
int & max(int &x, int &y);


int main()
{

   int i=20;
   int j= 30;

   cout << "Before calling inrement fn " << "i:" << i << " j:" << j << endl;
   increment(i,j);   

   cout << "After calling inrement fn " << "i:" << i << " j:" << j << endl;

   max(i,j) = 10;

   cout << "After calling max fn " << "i:" << i << " j:" << j << endl;

}

void increment(int &a, int &b)
{

   a++;
   b++;
}

int & max(int &x, int &y)
{

   if(x > y)
   {
      return x;
   }
   else
   {

      return y;
   }

}




