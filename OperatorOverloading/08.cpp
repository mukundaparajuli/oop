// operator overloading using member function
// write a program in c++ to add two complex numbers using operator overloading in member function
#include<iostream>
using namespace std;

class Complex{
    private:
        float real;
        float img;
    public:
        Complex(int r=0, int i=0){
            real=r;
            img=i;
        }

        Complex operator +(Complex c){
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }

        void display(){
            cout<<"The complex number is "<<real<<"+"<<img<<"i"<<endl;
        }
};
int main(){
    Complex c1(2,3);
    Complex c2(2,3);
    Complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}