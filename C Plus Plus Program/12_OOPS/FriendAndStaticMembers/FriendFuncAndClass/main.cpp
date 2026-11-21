#include <iostream>

using namespace std;

void fun();
class demo;

class test
{
	private:
		int a = 10;
	protected:
		int b = 20;
	public:
		int c = 30;
		
	friend void fun();  // Only friend function and class can access private and protected memeber
	friend demo;
};

class demo
{
	public:
		test T;
		
	void display()
	{
		
		cout<<"a:"<<T.a<<" b:"<<T.b<<" c:"<<T.c<<endl;
	}
};

void fun()
{
	test t;
	cout<<"A:"<<t.a<<" B:"<<t.b<<" C:"<<t.c<<endl;
	
}


int main(int argc, char** argv) {
	demo d;
	d.display();
	fun();
	return 0;
}
