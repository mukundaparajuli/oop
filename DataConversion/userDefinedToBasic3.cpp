// distance in feet and inches to meter
#include <iostream>
using namespace std;
class Distance{
    float feet, inches;
    public:
        void getData(){
            cout<<"Enter the distance in feet and inches: "<<endl;
            cin>>feet>>inches;
        }
        operator float(){
            float meter=feet+inches/12;
            meter=meter/3.2808;
            return meter;
        }
};
int main(){
    Distance d1;
    d1.getData();
    float meter=d1;
    cout<<"The distance in meter is: "<<meter<<endl;
}