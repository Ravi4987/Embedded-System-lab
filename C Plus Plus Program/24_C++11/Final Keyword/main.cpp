#include <iostream>

using namespace std;

/*Final keyword is used to restrict inheritance and function overriding*/


class Parent // final // You cant inherit this class as it is final
{
	virtual void show() //final
	{
		
		
	}
	
	
};

class child:Parent
{
	 void show()
	{
		
		
	}
	
};

int main(int argc, char** argv) {
	return 0;
}
