// Binary operator overloading using non member function or friend function
// wap in c++ to add two complex numbers using binary operator overloading using friend function
#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;

    public:
        Complex(int r=0, int i=0){
            real=r;
            img=i;
        }
        void show(){
            cout<<"The sum is "<<real<<"+"<<img<<"i"<<endl;
        }
        friend Complex operator +(Complex c1, Complex c2);
};
Complex operator +(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main(){
    Complex c1(2,3),c2(3,4),c3;
    c3=c1+c2;  //c3= operator+(c1, c2)
    c3.show();
    return 0;
}