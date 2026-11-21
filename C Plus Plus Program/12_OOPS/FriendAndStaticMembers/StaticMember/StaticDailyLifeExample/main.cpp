#include <iostream>

using namespace std;

class Student
{
	public:
		static int admission_no;
		int roll_no;
		string name;
		
	Student(string name)
	{
		admission_no++;
		roll_no = admission_no;
		this->name = name;
	}
	
	static int GetTotAdmissionNo()
	{
		return admission_no;
	}
	
	void displaydetail()
	{
		
		cout<<"Name:"<<name<<" Roll No:"<<this->roll_no<<endl;
		
	}
		
};

int Student::admission_no;



int main(int argc, char** argv) {
	Student S1("Ravi");
	Student S2("Aman");
	
	cout<<"Total Admission:"<<Student::admission_no<<endl;
	S1.displaydetail();
	S2.displaydetail();
	
	
	return 0;
}
