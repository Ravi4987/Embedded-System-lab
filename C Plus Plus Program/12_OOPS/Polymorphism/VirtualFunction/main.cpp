#include <iostream>

using namespace std;

class Base  // This type class is implement to achieve reusablity and polymorphism
{
	public:
	virtual	void func1()  
		{
			cout<<"Base fun1"<<endl;
		}
		
	virtual	void func2()=0;  // This is called pure virtual function derived class should implement this function
	
};

class Derived : public Base
{
	public:
		void func1()  
		{
			cout<<"Derived fun1"<<endl;
		}
		
		void func2()
		{
		  cout<<"Derived fun2"<<endl;		  	
		}
	
};

int main(int argc, char** argv) {
	
	Base *p = new Derived();
	
	p->func1();
	p->func2();
	
	
	return 0;
}
