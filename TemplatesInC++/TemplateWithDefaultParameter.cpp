#include <iostream>
using namespace std;

template <class T1 = float, class T2 = int, class T3 = char>
class testClass
{
    T1 data1;
    T2 data2;
    T3 data3;

public:
    testClass(T1 data1, T2 data2, T3 data3)
    {
        this->data1 = data1;
        this->data2 = data2;
        this->data3 = data3;
    }
    void display()
    {
        cout << "Data 1: " << data1 << endl;
        cout << "Data 2: " << data2 << endl;
        cout << "Data 3: " << data3 << endl;
        cout << endl;
    }
};
int main()
{
    testClass<> obj1(1.2, 123, 'a');
    obj1.display();
    testClass<int, int, int> obj2(12, 13, 14);
    obj2.display();
    return 0;
}