#include<iostream>
using namespace std;

class Feet{
    int feet, inch;
    public:
    Feet(int feet, int inch){
        this->feet=feet;
        this->inch=inch;
    }
    int getFeet(){return feet;}
    int getInch(){return inch;}
};
class Meter{
    int meter, centimeter;
    public:
    Meter(){};
    Meter(Feet f){
        int cm1=(f.getFeet())*30.48;
        int cm2=(f.getInch())*2.54;
        meter=(cm1+cm2)/100.00;
        centimeter=(cm1+cm2)%100;
    }
    void display(){
        cout<<"The length in meter and centimeter is "<<meter<<" m and "<<centimeter<<" cm"<<endl;
    }
    
};
int main(){
    Feet f1(12, 12);
    Meter m1;
    m1=f1;
    m1.display();
    return 0;
}