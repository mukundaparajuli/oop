// type of function call in which the memory address of the actual argument is passed instead of the argument copy
#include<iostream>
using namespace std;
void swapp(int *, int *);
int main(){
    int a, b;
    cout<<"Enter the value of a :"; cin>>a;
    cout<<"Enter the value of b :"; cin>>b;
    cout<<"Before swappping: "<<endl
        <<"a="<<a<<endl
        <<"b="<<b<<endl;
    swapp(&a, &b);
    cout<<"After swappping: "<<endl
        <<"a="<<a<<endl
        <<"b="<<b<<endl;
    return 0;
}
void swapp(int *p, int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}