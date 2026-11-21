#include <iostream>
using namespace std;

class student
{
   int marks;

   public:
   student(int m)
   {
      marks = m;
   }    

   friend void display(student s);
};

void display(student s) // frined function definition does not use the scope resolution operator
{
   cout << "Marks: " << s.marks << endl;
}





int main()
{
    student s1(90);
    display(s1);

  
  return 0;
}



