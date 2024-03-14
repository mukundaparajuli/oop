// convert a decimal number to hexadecimal and octal using the conceptof ios flags and member functions
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a decimal number "<<endl;
    cin>>a;
    cout.setf(ios::hex, ios::basefield);
    cout<<"The equivalent hexadecimal number is "<<a<<endl;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct, ios::basefield);
    cout<<"The equivalent octal number is "<<a<<endl;
    cout.unsetf(ios::oct);
    return 0;
}