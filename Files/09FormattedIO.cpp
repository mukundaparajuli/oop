#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout.width(50);
    cout<<setfill('*');
    cout.setf(ios::left);
    cout<<987654321;
    // cout<<setfill('*')<<endl;
    // cout<<endl;
}