# include<iostream>
using namespace std;

/*To run this example please enable c++ 11 In Dev C++ Go to Tools->Compiler Option->Programs

and add -std=c++11 under gcc and g++ for example gcc.exe -std=c++11 and g++.exe -std=c++11*/
    
/*program for using auto function

*/
float fun()
{
	return 2.34f;
}
int main()
{
	double d=12.3f;
	int i=9;
	auto x=2*d+i;
	cout<<x;
}
