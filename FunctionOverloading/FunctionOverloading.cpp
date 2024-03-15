#include<iostream>
using namespace std;
float area(float radius){
    return 3.1414*radius*radius;
}
float area(float l, float b){
    return l*b;
}
int main(){
    cout<<"The area of the circle is: "<<area(2);
    cout<<"The area of the rectangle is: "<<area(2,3);
}

// Function overloading is the feature in c++ which enables us to define two functions with same name 
// and is executed based on their differnce in type and number of arguments
// Function overloading is an example of run time polymorphism