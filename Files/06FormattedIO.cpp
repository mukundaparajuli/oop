// justify text left and right of width 50
#include<iostream>
using namespace std;
int main(){
    cout.width(50);
    cout.setf(ios::left);
    cout<<"This is the left justified text."<<endl;
    cout.unsetf(ios::left);
    cout.width(50);
    cout.setf(ios::right);
    cout<<"THis is the right justified text."<<endl;
    cout.unsetf(ios::right);
    return 0;
}