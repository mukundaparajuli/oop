#include <iostream>
using namespace std;
template <typename T>
T swapp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 2;
    int y = 3;
    swapp<int>(x, y);
    cout << "x=" << x << endl
         << "y=" << y << endl;
}