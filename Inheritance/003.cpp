#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Constructor from base class"<<endl;
    }
    ~Base(){
        cout<<"Destructor from base class"<<endl;
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"Consturctor from derived class"<<endl;
    }
    ~Derived(){
        cout<<"Destructor from derived class"<<endl;
    }
};
int main(){
    Derived D;
}