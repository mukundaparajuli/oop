// when base class has a constructor with argument and derived class has no data member 
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(int y){
            a=y;
            cout<<"Constructor in base class"<<endl;
        }
        void display(){
            cout<<"the value is "<<a<<endl;
        }
        ~A(){
            cout<<"Destructor inside Base class"<<endl;
        }
};
class B : public A{
    public:
    B(int b):A(b){
        cout<<"Constructor inside derived class"<<endl;
    }
    ~B(){
        cout<<"Destructor inside derived class"<<endl;
    }
};
int main(){
    B b1(12);
    b1.display();
}