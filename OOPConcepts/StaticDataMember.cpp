// static data member 
// commone for all the objects
// also called class variable 
// is always initialized to zero

#include<iostream>
using namespace std;

class Complex{
    int real, img;
    static int count;
    public: 
        void getData(){
            cout<<"Enter the real and imaginary numbers: "<<endl; cin>>real>>img;
            count++;
        }
        void showData(){
            cout<<"The complex number is: "<<real<<"+i"<<img<<endl;
            cout<<count<<endl;
        }
};
int Complex::count;
int main(){
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.getData();
    c1.showData();
    c2.showData();
    c3.showData();
}