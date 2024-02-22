#include<iostream>
using namespace std;
class Distance{
    int m; int cm;
    public:
    void getDistance(){
        cout<<"Enter the value of distance in m: ";
        cin>>m;
        cout<<"Enter the value of distance in cm: ";
        cin>>cm;
    }
    void showDistance(){
        cout<<"The distance is "<<m<<" m and "<<cm<<" cm"<<endl;
    }
    void addDistance(Distance d1, Distance d2){
        m=(d1.cm+d2.cm)/100;
        cm=(d1.cm+d2.cm)%100;
        m=m+d1.m+d2.m;
    }
};
int main(){
    Distance d1, d2, d3;
    d1.getDistance();
    d2.getDistance();
    d3.addDistance(d1, d2);
    d3.showDistance();
    return 0;
}