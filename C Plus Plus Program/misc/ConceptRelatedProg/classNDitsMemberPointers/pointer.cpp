#include <iostream>
using namespace std;

class M
{
   int x;
   int y;

   public:
    void set_xy (int a, int b)
    {

       x = a;
       y = b;
    }

    friend int sum(M m);
};


int sum(M m)
{
    int M ::* px = &M ::x;   // pointer to member x
    int M ::* py = &M ::y;   // pointer to member y

    M *pm = &m;    // Class pointer

    int S = m.*px + pm->*py;  
   
    return S;
}





int main()
{
    M n;

    void (M::*pf)(int, int) = &M::set_xy;  // pointer to member function
    (n.*pf)(10, 20);  // call member function through pointer

    cout << "Sum of x and y is: " << sum(n) << endl;

    M *pn = &n;  // Class pointer
    (pn->*pf)(30, 40);  // call member function through pointer      
    cout << "Sum of x and y is: " << sum(n) << endl;
  
  return 0;
}



