// Pointer to derived class object

// A class is said to be an abstract class if the class has a pure virtual function and has no objects then
// the class is called abstract class

#include<iostream>
using namespace std;
class Base{
    public:
        virtual void show()=0;
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
    Base *arr[2];
    Derv1 d1;
    Derv2 d2;
    arr[0]=&d1;
    arr[1]=&d2;
    arr[0]->show();  //function from derived class Derv1 is called
    arr[1]->show();  //function from derived class Derv2  is called
    return 0;
}