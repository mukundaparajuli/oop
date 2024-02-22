#include <iostream>
using namespace std;
class AddLength
{
public:
    int meter, centimeter;
    AddLength(int meter = 0, int centimeter = 0)
    {
        this->meter = meter;
        this->centimeter = centimeter;
    }
    AddLength operator+(AddLength l)
    {
        AddLength ans;
        ans.meter = (l.centimeter + centimeter) / 100;
        ans.centimeter = (l.centimeter + centimeter) % 100;
        ans.meter = meter + ans.meter + l.meter;
        return ans;
    }
};
int main()
{
    AddLength l1(12, 72);
    AddLength l2(12, 28);
    AddLength ans = l1 + l2;
    cout << "The ans is " << ans.meter << " meter and " << ans.centimeter << " centimeter." << endl;
}