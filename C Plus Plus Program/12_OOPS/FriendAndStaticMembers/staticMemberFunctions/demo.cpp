#include <iostream>
using namespace std;

// Like static data members, static member functions are also shared among all objects of the class. A static member function can only access static data members or other static member functions. It cannot access non-static data members or non-static member functions directly because it does not have a 'this' pointer.
// static member has the following properties:
// 1. A static member function can be called using the class name and the scope resolution operator (::) without creating an object of the class.
// 2. A static member function can only access static data members or other static member functions. It cannot access non-static data members or non-static member functions directly because it does not have a 'this' pointer.
// 3. A static member function can be called using an object of the class, but it is not recommended because it does not


class test
{
 
  int code;
  static int count;

  public:

  void getData()
  {
    cout << "code:" << code << " count:" << count << endl;
  }

  void incrementCodeAndCount()
  {
    code++;
    count++;
  }

  static void incrementCount()
  {
    count++;
    //code++; // This line will cause a compilation error because 'code' is not static and cannot be accessed in a static context.
  }
};

int test::count = 0;




int main()
{

  test t1;

  t1.incrementCodeAndCount();

  t1.incrementCount();

  //test::getData(); // This line will cause a compilation error because getData() is not a static member function and cannot be called using the class name.

  test::incrementCount(); // This is valid because incrementCount() is a static member function.

  t1.getData();


  
  return 0;
}



