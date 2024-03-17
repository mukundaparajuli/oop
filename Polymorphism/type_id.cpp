// typeid operator
// gives the information about the the type of variable or expression during runtime
// it actually returns the l value of type const std::type_info that represents the type of expression
// you must include <typeinfo> lib to use this
#include<iostream>
#include<typeinfo>
using namespace std;

class Base{
    public:
        virtual void function(){} 
};
class Complex: public Base{
    int real;
    int img;
    public:
        void getData(){
            cin>>real>>img;
        }
        void showData(){
            cout<<"Ans: "<<real<<"+i"<<img;
        }
};
int main(){
    int a, *iptr;
    float f, *fptr;
    Complex c, *cptr;
    Base b, *bptr;
    cout<<"a:"<<typeid(a).name()<<endl;
    cout<<"iptr:"<<typeid(iptr).name()<<endl;
    cout<<"f:"<<typeid(f).name()<<endl;
    cout<<"fptr:"<<typeid(fptr).name()<<endl;
    cout<<"c:"<<typeid(c).name()<<endl;
    cout<<"cptr:"<<typeid(cptr).name()<<endl;
    cout<<"b:"<<typeid(b).name()<<endl;
    cout<<"bptr:"<<typeid(bptr).name()<<endl;
}