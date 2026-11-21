#include <iostream>
using namespace std;

/*
Function overloading is a feature in C++ that allows you to have more than one function with the same name but different parameters. The compiler determines which function to call based on the number and types of arguments passed to the function.

//Declarations
int add(int a, int b);
int add(int a, int b, int c);
double add(double x, double y);
double add(int p, int q);
double add(double p, int q);

//Funcion call
cout << add(2, 3) << endl; // uses prototype 1
cout << add(2, 3, 4) << endl; // uses prototype 2
cout << add(2.5, 3.5) << endl; // uses prototype 3
cout << add(2, 3.5) << endl; // uses prototype 5   
cout << add(2.5, 3) << endl; // uses prototype 4

*/

// Decalaration of function prototypes
int area(int);
int area(int, int);
float area(float);

int main()
{
  cout << "Area of square: " << area(5) << endl;
   cout << "Area of rectangle: " << area(5, 10) << endl;
  cout << "Area of circle: " << area(5.0f) << endl;
   
  return 0;
}


int area(int side)
{
    return side * side;
}


int area(int length, int breadth)
{
    return length * breadth;
}

float area(float radius)
{
    return 3.14 * radius * radius;
}
