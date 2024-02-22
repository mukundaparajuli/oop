#include <iostream>
using namespace std;
class Product
{
    int m, n;

public:
    Product(int m, int n)
    {
        this->m = m;
        this->n = n;
    }
    int getM() { return m; }
    int getN() { return n; }
};
class Item
{
    int a, b;

public:
    Item() {}
    Item(Product p)
    {
        a = p.getM();
        b = p.getN();
    }
    void display()
    {
        cout << "The value of a is " << a << endl
             << "The value of b is " << b << endl;
    }
};

int main()
{
    Item i1;
    Product p1(2, 3);
    i1 = p1;
    i1.display();
}