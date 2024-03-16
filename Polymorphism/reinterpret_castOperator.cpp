// reinterpreter_cast operator is the type of operator which is used to convert one pointer to other of same or
// different type

#include<iostream>
using namespace std;
int main(){
    int a=65; int *p1=&a;
    char ch='z'; char *p2=&ch;
    p2=reinterpret_cast<char *>(p1);
    cout<<"The result after the reinterpret cast operator is: "<<endl;
    cout<<*p2;
    return 0;
}