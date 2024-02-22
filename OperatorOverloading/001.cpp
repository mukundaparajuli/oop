#include <iostream>
using namespace std;
class Compare
{
    int var;

public:
    void get()
    {
        cin >> var;
    }
    void operator==(Compare c2)
    {
        if (var == c2.var)
            cout << "Value of both of the objects are same" << endl;
        else
            cout << "Value of both of the objects are different to each other" << endl;
    }
};
int main()
{
    Compare c1, c2;
    cout << "Enter the value of var for c1" << endl;
    c1.get();
    cout << "Enter the value of var for c2" << endl;
    c2.get();
    c1 == c2;
    return 0;
}