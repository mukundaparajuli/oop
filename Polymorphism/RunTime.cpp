#include <iostream>
using namespace std;
class Base
{
public:
    void virtual display()
    {
        cout << "Display function from Base class" << endl;
    }
};
class Derived: public Base
{
public:
    void display()
    {
        cout << "Display function from Derived Class" << endl;
    }
};
int main()
{
    Base *baseClassPointer;
    Base baseClassObj;
    Derived derivedClassObj;
    baseClassPointer = &derivedClassObj;
    baseClassPointer->display();
    return 0;
}