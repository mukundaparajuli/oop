#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    // Here we have defined the function show with the parameter x and y which is differnt to the data members
    // but what if when we define the function the parameters are same as the data members i.e. the parameters are also a and b
    // void show(int x, int y)
    // {
    //     a = x;
    //     b = y;
    //     cout << "Object addresses are " << this << endl;
    //     cout << this->a << " " << this->b << endl;
    // }

    // when the parameters are same as data members
    // here when do something like this the variables inside the function are the parameter themselves
    // i.e the parameter of the function themselves are being assigned the value from themselves(precedence of the local variable is higher)
    // and the data members are never initialized and when we print the vlaue outside that function
    // we will get the garbage value since the datamembers were never assigned a value
    // void show(int a, int b)
    // {
    //     a = a;
    //     b = b;
    // }
    // void display()
    // {
    //     cout << "Object addresses are " << this << endl;
    //     cout << this->a << " " << this->b << endl;
    // }

    // to avoid this we use a special tool in c++ which we call this pointer which keeps the memory location of the current object
    void show(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "Object addresses are " << this << endl;
        cout << this->a << " " << this->b << endl;
    }
};
int main()
{
    test t;
    t.show(10, 12);
    t.display();
    return 0;
}