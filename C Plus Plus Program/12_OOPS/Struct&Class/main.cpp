#include <iostream>

using namespace std;

struct Demo
{
  int x;	// In struct data is public
  int y;
  
  void Display(void)
  {
    cout<<"Structure "<<"x:"<<x<<" y:"<<y<<endl;	
  }	
	
};

class classDemo
{
public:
  int x;	// In Class all members by default is private 
  int y;
  
  void Display(void)
  {
    cout<<"Class "<<"x:"<<x<<" y:"<<y<<endl;	
  }	
	
};

int main(int argc, char** argv) {
	
	Demo d;
	classDemo D;
	
	d.x = 10;
	d.y = 20;
	d.Display();
	
	D.x = 10;
	D.y = 20;
	D.Display();
	
	return 0;
}
