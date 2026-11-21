#include <iostream>

using namespace std;

class Base
{
	public:
	 Base()
	{
		cout<<"Non param Base class constructor"<<endl;	
	}
	
	Base(int a)
	{
		
		cout<<"Param Base class constructur:"<<a<<endl;
	}
		
};

class Derived:public Base
{
	public:
	Derived ()
	{
		cout<<"Non param Derived class constructor"<<endl;
	}
	Derived (int x)
	{
		cout<<"Param Derived class constructur:"<<x<<endl;	
	}		
	 Derived(int x,int y):Base(y)
	{
		cout<<"Param Base and Derived class constructur:"<<x<<endl;	 
    }    
};

int main(int argc, char** argv) {
	
	Derived d;
	Derived e(5);
	Derived f(10,15);	

	
	return 0;
}

