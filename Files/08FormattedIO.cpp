// display a float number in fixed and scientific format
#include<iostream>
using namespace std;
int main(){
    float a=9.095345340;
    cout.setf(ios::fixed, ios::floatfield);
    cout<<a<<endl;
    cout.unsetf(ios::fixed);
    cout.setf(ios::scientific, ios::floatfield);
    cout<<a<<endl;
    cout.unsetf(ios::scientific);
    return 0;
}