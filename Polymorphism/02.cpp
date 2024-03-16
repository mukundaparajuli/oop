// Pointer to derived class object
#include<iostream>
using namespace std;
class Base{
    public:
        virtual void show(){
            cout<<"The show funtion from the Base class"<<endl;
        }
};
class Derv1: public Base{
    public:
        void show(){
            cout<<"The show function from the first Derived class"<<endl;
        }
};
class Derv2: public Base{
    public:
        void show(){
            cout<<"The show function from the second Derived class"<<endl;
        }
};
int main(){
    Base *ptr;
    Derv1 d1;
    Derv2 d2;
    ptr=&d1;
    ptr->show();  //function from derived class Derv1 is called
    ptr=&d2;
    ptr->show();  //function from derived class Derv2 is called
    return 0;
}