#include <iostream>

class Rectangle
{
	public:		// If nothing is defined here then by default it is private
	  int length;
	  int breadth;
	  
	int area()
	{
		return length*breadth;
	}
	
	int perimter()
	{
		return 2*(length+breadth);
	}
};


int main(int argc, char** argv) {
	
	Rectangle r1, r2;
	
	r1.length = 10;
	r1.breadth = 20;

	r2.length = 5;
	r2.breadth = 10;
	
	printf("Area of R1:%d Area of R2:%d\r\n",r1.area(),r2.area());
	printf("Perimeter of R1:%d Perimeter of R2:%d\r\n",r1.perimter(),r2.perimter());
	
	
	return 0;
}
