// meter to feet and inches
#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
    public:
        Distance(){
            feet=0;
            inches=0;
        }
        Distance(float m){
            float feetf=m*3.2808;
            feet=int(feetf);
            inches=(feetf-feet)*12;
        }
        void display(){
            cout<<"The distance is "<<feet<<"feet and "<<inches<< " inches"<<endl;
        }
};
int main(){
    Distance d;
    int m;
    cout<<"Enter the distance in meter:"<<endl; cin>>m;
    d=m;
    d.display();
    return 0;
}