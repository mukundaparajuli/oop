// swap two private data from two classes using friend function
#include <iostream>
using namespace std;
class second;
class first
{
    int a = 10;
    friend void swap(first, second);
};
class second
{
    int b = 20;
    friend void swap(first, second);
};
void swap(first f, second s)
{
    int temp = f.a;
    f.a = s.b;
    s.b = temp;
    cout << "The value of class first is " << f.a << endl;
    cout << "The value of class second is " << s.b << endl;
}
int main()
{
    first f;
    second s;
    swap(f, s);
}