# include<iostream>
using namespace std;
  
/*To run this example please enable c++ 11 In Dev C++ Go to Tools->Compiler Option->Programs

and add -std=c++11 under gcc and g++ for example gcc.exe -std=c++11 and g++.exe -std=c++11*/
    
/*program for lambda expression

*/

template<typename T>

void func(T p)
{
	
	p();
}

int main()
{
	[](int x,int y)
	{
	 	cout<<"sum is "<<x+y<<endl;
	}
	(10,30);
				// Param	Body		Call		[]-> Captionlist		
	int a = [](int x,int y){return x*y;}(10,20);
	
	cout<<a<<endl;
	
	a = 40;
	
    auto f= [a](){cout<<a<<endl;}; // You can pass local variable
	
	f();		// Just fucntion pointer
	f();		// Just fucntion pointer
	
	int b = 10;
	
	auto g = [&b](){cout<<b++<<endl;}; // You can pass reference of local variable if you want to change its value
	
	g();
	g();
	
	func(g);
	
	
}
