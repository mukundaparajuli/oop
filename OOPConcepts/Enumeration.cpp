// enumeration or enum is an user defined data type in c++
// it is used to assign names to integral constants
#include<iostream>
using namespace std;
int main(){
    enum day{sun, mon=89, tue, wed, thu, fri, sat};
    int d=wed;
    cout<<"The number for wed is "<<d<<endl;
    cout<<"The number for sun is "<<sun<<endl;
    cout<<"The number for sat is "<<sat<<endl;
}