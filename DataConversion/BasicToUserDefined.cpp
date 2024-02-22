#include <iostream>
using namespace std;
class Celcius
{
    float tempr;

public:
    Celcius()
    {
        tempr = 0;
    }
    Celcius(float ftemp)
    {
        tempr = (ftemp - 32) * 5 / 9;
    }
    void showTempr()
    {
        cout << "Temperature in Celcius: " << tempr << endl;
    }
};
int main()
{
    Celcius cel;
    float fer;
    cout << "ENter the Temperature in fahrenheit measurement: " << endl;
    cin >> fer;
    cel = fer;
    cel.showTempr();
}