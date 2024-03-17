#include<iostream>
using namespace std;
class Complex{
    int real, img;
    public: 
        void getData(){
            cout<<"Enter the real and img data: "<<endl; cin>>real>>img;
        }
        void show(){
            cout<<real<<"+i"<<img<<endl;
        }
};
class Distance{
    int meter, cm;
    public:
        void getData(){
            cout<<"Enter the distance in meter and centimeter: "<<endl; cin>>meter>>cm;
        }
        void show(){
            cout<<"Meter: "<<meter<<" Centimeter: "<<cm;
        }
};
int main(){
    Complex *cptr=new Complex;
    Distance *dptr=new Distance;
    dptr->getData();
    cptr=reinterpret_cast<Complex *>(dptr);
    cptr->show();
    delete cptr, dptr;
    return 0;
}