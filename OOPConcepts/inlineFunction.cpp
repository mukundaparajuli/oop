// inline function is a special type of function which expand in a line whenever it is called
// a function is made inline to reduce function call overhead
// inline function is efficent when a small function is to be called repeatedly
#include<iostream>
using namespace std;
inline int calcSI(int p,int t,int r){
    return (p*t*r)/100;
}
int main(){
    int p, t, r;
    p=500;
    t=2;
    r=10;
    cout<<"P"<<"\t"<<"t"<<"\t"<<"SI"<<endl;
    cout<<"-------------------"<<endl;
    for(int p=500; p<1100; p+=100){
        cout<<p<<"\t"<<t<<"\t"<<calcSI(p, t, r)<<endl;
    }

}