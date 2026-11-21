#include <iostream>
using namespace std;


class item
{
  static int count;
  int number=0;

  public:
  void getdata()
  {
    cout << "count:" << count << " number:" << number << endl;

  }

  void incrementVar()
  {
      count++;
      number++;
  }
};


int item::count; // Type and scope of static member varible must be defined outside. 
// This is necessaary because the static member are stored separetly rather than as a part of object.

int main()
{
  item t1,t2,t3; // count is initialized to 0

  t1.getdata();
  t1.incrementVar();

  t2.getdata();
  t2.incrementVar();


  //count++; // We cannot increment count because its scope is within class only it is accessbile inside by object only

  t3.getdata();
  t2.getdata();
  t1.getdata();



  
  return 0;
}



