#include <iostream>
using namespace std;
class Addition
{
    int var;

public:
    void get()
    {
        cin >> var;
    }
    int operator+(Addition a2)
    {
        return var + a2.var;
    }
};
int main()
{
    Addition a1, a2;
    cout << "Enter the value of variable for the a1 object:" << endl;
    a1.get();
    cout << "Enter the value of variable for the a2 object:" << endl;
    a2.get();
    int ans = a1 + a2;
    cout << "The result is " << ans << endl;
}