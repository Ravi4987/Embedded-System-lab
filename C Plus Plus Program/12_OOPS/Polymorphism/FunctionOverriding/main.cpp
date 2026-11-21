#include <iostream>

using namespace std;

class Base
{
	public:
		void display()
		{
			cout<<"Base display"<<endl;
		}
		
		void fun()
		{
			cout<<"Base Fun"<<endl;
		}
	
};

class Derived:public Base
{
	public:
		void display()  // This is function overriding with same function prototype
		{
			cout<<"Derived display"<<endl;
		}
		
			void fun(int x) // This is not funtion overriding as it is different from parent class
		{
			cout<<"Derived Fun:"<<x<<endl;
		}
	
};

int main(int argc, char** argv) {
	Derived d;
	
	d.display();
	
	d.Base::fun();  // Base fun calling using Derived class object
	
	d.fun(10);		// Derived func calling using Derived class object
	
		
	return 0;
}
