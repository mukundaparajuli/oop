// dynamic_cast operator
// change one data type to another
// similar to reinterpret_cast operator but checks the consistency during run time
// can be used to safely downcast base class pointer to derived class pointer
// can be used to safely upcast derived class pointer to the bae class pointer
// is more safe and reliable than reinterpret_cast operator

#include<iostream>
#include<typeinfo>
using namespace std;
class Base{
    public:
    virtual void func(){}
};
class Derived: public Base{};
int main(){
    Base *b=new Derived();
    Derived *d=dynamic_cast<Derived*>(b);
    if(d==NULL){
        cout<<"Did not work";
    }else{
        cout<<"Worked"<<endl;
    }
}