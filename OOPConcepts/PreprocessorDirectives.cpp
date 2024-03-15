// Area of a circle using preprocessor directives
#include<iostream>
#define PI 3.14
#define area(radius) PI*radius*radius

using namespace std;

int main(){
    float radius;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>radius;
    cout<<"The area of the given circle is "<< area(radius)<<endl;
    return 0;
}