#include<iostream>
using namespace std;
int main(){
    int *ptr;
    ptr= new int;
    *ptr=555;
    cout<<"The entered value is "<<*ptr;
    delete ptr;
}