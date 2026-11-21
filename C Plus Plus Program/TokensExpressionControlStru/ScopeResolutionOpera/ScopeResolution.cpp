#include <iostream>
using namespace std;

/*
C++ also allows the use of the 
scope resolution operator (::) to access global variables when there 
is a local variable with the same name.
*/


int m = 10; // global m

int main()
{
   int m = 20;  // m redecalared, local to main

   {
     int k = m;   
     int m = 30;  // m declared again
                  // local to inner block

     cout << "We are in innner block"<< endl;
     cout << "k = " << k << endl;
     cout << "m = " << m << endl;

     cout << "::m = " << ::m << "\n";
   }

   cout << "We are in outer block"<< endl;
     cout << "m = " << m << endl;
     cout << "::m = " << ::m << "\n";



    return 0;
}


