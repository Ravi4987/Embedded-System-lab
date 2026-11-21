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
	Rectangle *pS,*pH;
	Rectangle r;
	
	// Below object is created in stack area
	pS = &r;	
	
	// Below object is created in Head area 
	pH = new Rectangle();
	
	pS->length = 10;
	pS->breadth = 20;

	pH->length = 5;
	pH->breadth = 10;
	
	
	printf("Area of pS:%d Area of pH:%d\r\n",pS->area(),pH->area());
	printf("Perimeter of pS:%d Perimeter of pH:%d\r\n",pS->perimter(),pH->perimter());
	
	
	return 0;
}
