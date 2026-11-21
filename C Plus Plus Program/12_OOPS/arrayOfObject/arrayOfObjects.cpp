#include <iostream>
using namespace std;


class employee
{
   char name[30];
   int age;

   public:
   void getData(void);
   void putData(void);
};


void employee::getData(void)
{
    cout << "Enter name:";
    cin >> name;
    
    cout << "Enter age:";
    cin >> age;
}

void employee::putData(void)
{
   cout << "Name:" << name << " Age:" << age << endl;
}


int main()
{

  employee e[3];

  for(int i=0;i<3;i++)
  {
      cout << "Enter employee " << i + 1 << " detail" << endl;

      e[i].getData();

  }

  cout << "\n\n";

  for(int i=0;i<3;i++)
  {
      cout << "Deail of employee " << i + 1 <<  endl;

      e[i].putData();

  }
 
   


  
  
  return 0;
}



