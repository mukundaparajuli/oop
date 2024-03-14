// display float numbers with precision
#include<iostream>
using namespace std;
int main(){
    float b=4.56403;
    cout.precision(4);
    cout<<b<<endl;
    cout.precision(2);
    cout<<b<<endl;
    cout.precision(1);
    cout<<b<<endl;
    cout.precision(3);
    cout<<b<<endl;
    cout.precision(6);
    cout<<b<<endl;
    return 0;
}