// Add 2 complex numbers using the concept of object as a function type and return argument
#include<iostream>
using namespace std;
class Complex{
    int real, img;
    public:
        void getData(){
            cout<<"Enter the real and img value: "<<endl;cin>>real>>img;
        }
        Complex addition(Complex c1,Complex c2){
            Complex temp;
            temp.real=c1.real+c2.real;
            temp.img=c1.img+c2.img;
            return temp;
        }
        void show(){
            cout<<"The result is:"<<endl
                <<real<<"+"<<img<<"i"<<endl;
        }
};
int main(){
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3=c3.addition(c1, c2);
    c3.show();
}