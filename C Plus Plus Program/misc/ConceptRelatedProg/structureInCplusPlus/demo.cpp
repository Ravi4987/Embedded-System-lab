#include <iostream>
using namespace std;

struct demo
{
 int a;
 char b;

 void structFn()  // In c++  we can define a function inside the struct. This is not possible in C.
 {
  cout << "Struct function called " << "a: " << a << " b: " << b << endl;
 }
};


demo d; // In c++ we can declare strut varible without using the keyword "struct". This is not possible in C.
// Be default all the members of a struct are public in C++.


int main()
{
  
  d.a = 10;
  d.b = 'A';
  d.structFn();

  return 0;
}



