// find which one is bigger between the values of two different classes
#include <iostream>
using namespace std;
class test2;
class test1
{
    int a;

public:
    void get()
    {
        cout << "Enter the value for class test1 ";
        cin >> a;
    }
    friend void big(test1, test2);
};
class test2
{
    int b;

public:
    void get()
    {
        cout << "Enter the value for class test2 ";
        cin >> b;
    }
    friend void big(test1, test2);
};
void big(test1 t1, test2 t2)
{
    if (t1.a > t2.b)
    {
        cout << t1.a << " is bigger than " << t2.b;
    }
    else if (t1.a < t2.b)
    {
        cout << t2.b << " is bigger than " << t1.a;
    }
    else
    {
        cout << "Both the numbers are equal." << endl;
    }
}
int main()
{
    test1 t1;
    test2 t2;
    t1.get();
    t2.get();
    big(t1, t2);
    return 0;
}