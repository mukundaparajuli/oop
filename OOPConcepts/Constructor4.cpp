// copy constructor
#include<iostream>
using namespace std;
class Complex{
    int real, img;
    public:
        Complex(){

        }
        Complex(int r, int i){
            real=r;
            img=i;
        }
    void show(){
        cout<<"The complex number is "<<real<<"+"<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(2,3);
    Complex c2(c1);
    c2.show();
}