#include <iostream>
using namespace std;
class TimeConversion
{
    int hour, minutes;

public:
    TimeConversion(int dur = 0)
    {
        hour = dur / 60;
        minutes = dur % 60;
    }
    void display()
    {
        cout << "The duration is " << hour << " hour and " << minutes << " minutes." << endl;
    }
};
int main()
{
    TimeConversion T1;
    int dur = 70;
    T1 = dur;
    T1.display();
    return 0;
}