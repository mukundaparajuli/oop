// Constant Objects and constant member functions
#include<iostream>
using namespace std;
class Complex{
    float real, img;
    public:
        Complex(float r=0, float i=0){
            real=r;
            img=i;
        }
        void showData() const
        {
            cout<<"The resultant complex number is: "<<real<<"+"<<img<<"i"<<endl;
        }
};
int main(){
    const Complex c1, c2(1.2,2.3);
    c1.showData();
    c2.showData();
    return 0;
}