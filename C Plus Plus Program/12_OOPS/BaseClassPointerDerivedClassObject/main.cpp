#include <iostream>

using namespace std;

class BasicCar
{
	public:
		void CarStart()
		{
			
			cout<<"Car started"<<endl;
		}
	
};

class AdvanceCar:public BasicCar
{
	public:
		void PlayMusic()
		{
			
			cout<<"Music On"<<endl;
		}
	
};


int main(int argc, char** argv) {
	
	BasicCar b;
	BasicCar *pB;
	
	AdvanceCar a;
	AdvanceCar *pA;
	
	a.CarStart();
	a.PlayMusic();
	
//	pA = &b; // You cannot point to base class object with derived class pointer

	pB = &a;
	
	pB->CarStart();
//	pB->PlayMusic();  // You cannot call derived class function using base class pointer
	
	
	
	 
	
	
	return 0;
}
