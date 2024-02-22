// operator overloading with non member function
#include <iostream>
using namespace std;
class AddLength
{
    int feet, inch;

public:
    AddLength(int feet = 0, int inch = 0)
    {
        this->feet = feet;
        this->inch = inch;
    }
    friend void operator+(AddLength l1, AddLength l2)
    {
        AddLength ans;
        ans.inch = (l1.inch + l2.inch) % 12;
        ans.feet = (l1.inch + l2.inch) / 12;
        ans.feet += l1.feet + l2.feet;
        cout << "the total length in feet is " << ans.feet << " feet" << endl;
        cout << "The total length in inch is " << ans.inch << " inch" << endl;
    };
};
int main()
{
    AddLength l1(12, 12);
    AddLength l2(12, 12);
    l1 + l2;
    return 0;
}