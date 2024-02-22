#include <iostream>
using namespace std;
class Time
{
    int h;
    int m;

public:
    void getTime()
    {
        cout << "Enter the value of time in hour: " << endl;
        cin >> h;
        cout << "Enter the value of time in minutes: " << endl;
        cin >> m;
    }
    void putTime()
    {
        cout << "Hour: " << h << "\t Minutes:" << m << endl;
    }
    void addTime(Time t1, Time t2)
    {
        h = (t1.m + t2.m) / 60;
        m = (t1.m + t2.m) % 60;
        h = h + t1.h + t2.h;
    }
};
int main()
{
    Time t1, t2, t3;
    t1.getTime();
    t2.getTime();
    t3.addTime(t1, t2);
    t3.putTime();
    return 0;
}