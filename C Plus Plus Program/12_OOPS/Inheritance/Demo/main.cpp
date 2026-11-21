#include <iostream>

using namespace std;

class Base
{
	public:
	void Display(void)
	{
		cout<<"Base class"<<endl;	
	 	
	}	
};

class Derived:public Base
{
	public:
	void Show(void)
	{
		cout<<"Derived class"<<endl;	 
    }    
};

int main(int argc, char** argv) {
	
	Derived d;
	
	d.Display();
	d.Show();
	
	return 0;
}
