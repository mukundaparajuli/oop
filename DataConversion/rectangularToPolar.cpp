// Rectangular to polar 
// writing conversion routing in source class as operator function
#include<iostream>
#include <cmath>
using namespace std;
class Polar{
    float r, theta;
    public:
        Polar(){
            r=0.0;
            theta=0.0;
        }
        Polar(int rad, int th){
            r=rad;
            theta=th;
        }
        void showData(){
            cout<<"R="<<r<<endl<<"Theta="<<theta<<endl;
        }
};
class Rect{
    int x, y;
    public:
        Rect(){
            cout<<"Enter the values of x and y: "; cin>>x>>y;
        }
        operator Polar(){
            float r, theta;
            r=sqrt(pow(x,2)+pow(y,2));
            theta=atan(y/x);
            Polar(r, theta);
        }
};
int main(){
    Rect R1;
    Polar p1;
    p1=R1;
    p1.showData();
    return 0;
}