#include <iostream>
using namespace std;


class Time
{
    int hours;
    int minutes;

    public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void puttime(void)
    {
        cout << "Time is: " << hours << " hours and " << minutes << " minutes." << endl;
    }

    void sum(Time t1, Time t2);
};


void Time::sum(Time t1, Time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = t1.hours + t2.hours + minutes / 60;
    minutes = minutes % 60;
}


int main()
{

  Time t1, t2, t3;

    t1.gettime(2, 45);
    t2.gettime(3, 30);

    t3.sum(t1, t2);
    t3.puttime();

  
  return 0;
}



