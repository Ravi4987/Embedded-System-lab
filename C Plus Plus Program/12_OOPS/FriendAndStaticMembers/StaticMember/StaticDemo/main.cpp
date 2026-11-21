#include <iostream>

using namespace std;

class test
{
	public:
		static int a;
	test()
	{
		
		a++;
	}
	void display()
	{
		cout<<"a:"<<a<<endl;	
	}
	
	static int getA()	// To access static member function should be static
	{
		return 10;
	}	
};

int test::a;	// For static member it needs to be decalare outside the class using scope resolution

int main(int argc, char** argv) {
	test t;
	t.display();
	test s;
	t.display();
	
	cout<<test::getA();  /// To call class function without object function should be static
	
	
	
	
	
	return 0;
}
