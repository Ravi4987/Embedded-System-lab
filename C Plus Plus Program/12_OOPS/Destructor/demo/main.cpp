#include <iostream>

using namespace std;

class Base{
	public:
		Base()
		{
			cout<<"Base Constructor"<<endl;
		}
		
		~Base()
		{
			cout<<"Base Destructor"<<endl;
		}	
};

void fun()
{
	cout<<"Func called"<<endl;
	Base *p = new Base(); // object is created in Heap memory
	delete p;  // This should be called to call destructor to free the resources
	cout<<"Func exit"<<endl;
}

int main(int argc, char** argv) {
	Base b;  // at the end of the main function destructor wiil be called automatically
	
	fun();
	return 0;
}
