#include<iostream>
#include<cmath>

using namespace std;

class Polar{
    float rad;
    float ang;
    public:
        Polar(){
            rad=0;
            ang=0;
        }
        Polar(float r, float a){
            rad=r;
            ang=a;
        }
        void display(){
            cout<<"The co ordinate in polar form is"<<endl;
            cout<<"Rad: "<<rad<<endl;
            cout<<"Ang: "<<ang<<endl;
        }
};
class Rect{
    float x; float y;
    public:
        Rect(){
            x=0;
            y=0;
        }
        Rect(float x, float y){
            this->x=x;
            this->y=y;
        }
        operator Polar(){
            float rad=sqrt(pow(x,2)+pow(y,2));
            float ang=atan(y/x);
            return Polar(rad, ang);
        }
};
int main(){
    Rect r1(3.0,4.0);
    Polar p1;
    p1=r1;
    p1.display();
    return 0;

}