#include <iostream>
using namespace std;

template <class T1, class T2>
class testClass
{
public:
    T1 data1;
    T2 data2;

    testClass(T1 data1, T2 data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }

    void display()
    {
        cout << "Data 1: " << data1 << endl;
        cout << "Data 2: " << data2 << endl;
    }
};
int main()
{
    testClass<int, char> t1(12, 'a');
    t1.display();
    return 0;
}