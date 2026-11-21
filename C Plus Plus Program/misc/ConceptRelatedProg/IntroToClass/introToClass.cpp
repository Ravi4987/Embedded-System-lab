#include <iostream>
using namespace std;

class item  // class definition is almost similar to structure
{
   // data members
   int number;  // private by default
   float cost; // private by default

   public:
   // Member funcion
   void getdata(int a, float b); // only decalaration we will define it outside the class

   void putdata(void)  
   {
  
    cout << "number :" << number << endl; // member function can access private data member
    cout << "cost :" << cost << "\n";
   }

   void getdatandShow(int a, float b);
};

// Class function definition outside the class
void item::getdata(int a, float b)
{
   number = a;
   cost = b;

}

void item::getdatandShow(int a, float b)
{

  getdata(a,b);
  putdata();
  // Member function do not need to use . operator to call member function
}

int main()
{
  
  item t; // memory creted;

  t.getdata(10,3.5);
  t.putdata();

  t.getdatandShow(20, 10.5);

  return 0;
}



