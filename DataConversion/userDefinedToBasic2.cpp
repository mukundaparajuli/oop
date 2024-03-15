// Distance in feet and inches to meter;
#include<iostream>
using namespace std;
class Distance{
    float feet;
    float inches;
    public:
        Distance(float feet, float inches){
            this->feet=feet;
            this->inches=inches;
        }
        operator float(){
            // feet and inches to meter
            float m=inches/12;
            m=m+feet;
            return (m/3.2808);
        }
};
int main(){
    Distance d(6,0.28);
    float m=d;
    cout<<"The distance in meter is "<<m<<endl;
    return 0;
}