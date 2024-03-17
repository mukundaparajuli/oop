// A type of function generalized to work with different data types
// Is defined in generic way and can be adapted by other data types as needed

// a template function for sum

#include<iostream>
using namespace std;

template<class T>
T addition(T a, T b){
    T sum;
    sum=a+b;
    return sum;
}

int main(){
    cout<<"The sum of two integers is: "<<addition(2,3)<<endl;
    cout<<"The sum of two float variables is: "<<addition(2.2,3.3)<<endl;
    cout<<"The sum of two char variables is: "<<addition('a','b')<<endl;
}