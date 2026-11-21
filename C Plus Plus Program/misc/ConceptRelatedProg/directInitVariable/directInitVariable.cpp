#include <iostream>
using namespace std;

int a = 10;

int show(a); // This is direct initialization of variable show using a



int main()
{

    cout << "a : " << a << " show : " << show << endl;
    show = 20; // This is assignment of value 20 to variable show
    cout << "a : " << a << " show : " << show << endl;
  
  return 0;
}

