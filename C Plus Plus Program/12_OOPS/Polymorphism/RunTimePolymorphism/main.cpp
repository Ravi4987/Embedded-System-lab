#include <iostream>

using namespace std;

class Car  // This is interface class it contains only pure virtual function you cannot create its object only pointer you can create
{
	public:
	virtual	void startCar()=0;	
};

class Alto : public Car
{
	public:
		void startCar()
		{
			cout<<"Alto car started"<<endl;
		}	
};

class Swift : public Car
{
	public:
		void startCar()
		{
			cout<<"Swift car started"<<endl;
		}	
};



int main(int argc, char** argv) {
	Car *c;
	c = new Alto();
	
	c->startCar();
	
	c= new Swift();
	
	c->startCar();
	
// This is called Run time polyphorism same function but different functionality
	
	
	
	return 0;
}
