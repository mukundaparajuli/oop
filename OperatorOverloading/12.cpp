// unary operator overloading
#include<iostream>
using namespace std;
class Complex{
    float real, img;
    public:
        Complex(){
            real=0;
            img=0;
        }
        Complex(float r, float i){
            real=r;
            img=i;
        }
        void showData(){
            cout<<"The result is "<<real<<"+i"<<img<<endl;
        }

        // prefix
        Complex operator ++(){
            Complex temp;
            temp.real=++real;
            temp.img=++img;
            return temp;
        }

        // post fix
        Complex operator ++(int){
            Complex temp;
            temp.real=real++;
            temp.img=img++;
            return temp;
        }
};
int main(){
    Complex c1(2,3), c2(1.1, 2.2), c3;
    c2=++c1;
    c3=c2++;

    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
}