#include <iostream>

using namespace std;

class Base{
	public:
		Base()
		{
			cout<<"Base Constructor"<<endl;
		}
		
	virtual	~Base()
		{
			cout<<"Base Destructor"<<endl;
		}	
};

class Derived:public Base
{
	public:
		Derived()
		{
			cout<<"Derived Constructor"<<endl;
		}
		
		~Derived()
		{
			cout<<"Derived Destructor"<<endl;
		}
		
};

void fun()
{
	cout<<"Func Start"<<endl;
	Base *p = new Derived();
	delete p;  // Base destructor do defined as virtual then only base destructor will be called
	
	cout<<"Function exit"<<endl;
}



int main(int argc, char** argv) {
	Derived d;
	
	fun();
	return 0;
}

