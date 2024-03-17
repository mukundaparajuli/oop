// a template function can also be overloaded with the normal function

#include<iostream>
using namespace std;
template<class T>
T greatest(T a, T b){
    if(a>b) return a;
    else return b;
}
int greatest(int a,int b,int c){
    if(a>b && a>c) return a;
    else if(b>a && b>c)return b;
    else return c;
}
int main(){
    cout<<"The greatest no. between two integers :"<<greatest(1,2)<<endl;
    cout<<"The greatest no. between two float variables :"<<greatest(11.2,234.4)<<endl;
    cout<<"The greatest no. between three integers:"<<greatest(443,345,345)<<endl;
    cout<<"The greatest no. between three float variables :"<<greatest(345.345,34535.1,345.2)<<endl;
}