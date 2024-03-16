// necessity of virtual destructor

// using virtual destructor
#include<iostream>
using namespace std;

class Base{
    public:
        virtual ~Base(){
            cout<<"Destroying the base class object.."<<endl;
        }
};
class Derived: public Base{
    public:
        ~Derived(){
            cout<<"Destroying the derived class object..."<<endl;
        }
};

int main(){
    Base *base_pointer=new Derived;
    delete base_pointer;
    return 0;
}

// here both the base class obj as well as derived class obj is destroyed