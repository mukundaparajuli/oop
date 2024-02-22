#include <iostream>
using namespace std;
class ConvertToBasic
{
    int hour, minutes;

public:
    ConvertToBasic(int hour, int minutes)
    {
        this->hour = hour;
        this->minutes = minutes;
    }
    operator int()
    {
        return (hour * 60 + minutes);
    }
};
int main()
{
    ConvertToBasic t1(1, 12);
    int x;
    x = t1; // this will call the operator int function and x will the value returned from the function
    cout << "The total duration is " << x << " minutes." << endl;
    return 0;
}