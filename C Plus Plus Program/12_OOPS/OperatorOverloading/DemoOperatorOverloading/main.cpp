#include <iostream>

using namespace std;


class Complex
{
  public:
  	int real;
  	int img;
  	
  	
 Complex add(Complex c)
 {
 	Complex temp;
 	
 	temp.real = this->real + c.real;
 	temp.img  = this->img  + c.img;
 	
 	return temp;
 }
 
 Complex operator+(Complex c)
 {
 	Complex temp;
 	
 	temp.real = this->real + c.real;
 	temp.img  = this->img  + c.img;
 	
 	return temp;
 }
	
	
};

int main(int argc, char** argv) {
	Complex c1,c2,c3;
	
	c1.real = 5;
	c1.img  = 3;
	
	c2.real = 10;
	c2.img  = 5;
	
	c3 = c1.add(c2); //or c3 = c2.add(c1);
	
	cout<<c3.real<<"+i"<<c3.img<<endl;
	
	c3.real = 0;
	c3.img  = 0;
	
	c3 = c1 + c2;  // Using add operator
	
	cout<<c3.real<<"+i"<<c3.img<<endl;
	
	
	
	return 0;
}
