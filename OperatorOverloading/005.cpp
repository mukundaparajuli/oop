#include <iostream>
using namespace std;

class unary
{
    int a;

public:
    unary(int a)
    {
        this->a = a;
    }
    int operator++(int)
    {
        a++;
        return a;
    }
    int operator++()
    {
        ++a;
        return a;
    }
};
int main()
{
    unary a1(2);
    // int b = a1++;
    cout << a1++;
    return 0;
}