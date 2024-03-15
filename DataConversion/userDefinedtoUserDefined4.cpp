// Conversion betn two user defined data types
// writing conversion routine in destination class
// conversion from cartensian co-ordinates to polar co-ordinates
#include<iostream>
#include<cmath>
using namespace std;
class Rect{
    float x;
    float y;
    public:
        Rect(){
            x=0;
            y=0;
        }
        Rect(float x, float y){
            this->x=x;
            this->y=y;
        }
        float returnx(){return x;}
        float returny(){return y;}
};
class Polar{
    float r, theta;
    public:
        Polar(Rect p){
            r=sqrt(pow(p.returnx(),2)+pow(p.returny(),2));
            theta=atan(p.returny()/p.returnx());
        }
        void show(){
            cout<<"The co-ordinate in polar form is "<<endl;
            cout<<"R="<<r<<endl;
            cout<<"Theta="<<theta<<endl;
        }
};
int main(){
    Rect r1(3,4);
    Polar p=r1;
    p.show();
}