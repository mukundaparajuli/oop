// feet to meter and centimeter
#include<iostream>
using namespace std;
class Distance{
    int meter;
    int centimeter;
    public:
        Distance(){
            meter=0;
            centimeter=0;
        }
        Distance(float ft){
            float meterf=ft/3.2808;
            meter=int(meterf);
            centimeter=100*(meterf-meter);
        }
        void display(){
            cout<<"The distance is "<<meter <<" and "<<centimeter<<" centimeter."<<endl;
        }
};
int main(){
    int feet;
    Distance d;
    cout<<"Enter the distance in feet: "; cin>>feet;
    d=feet;
    d.display();
    return 0; 
}