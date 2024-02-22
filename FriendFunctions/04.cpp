#include<iostream>
using namespace std;
class test{
    int a, b;
    public:
    void getData();
    friend void sum(test);
};
void test::getData(){
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
}
void sum(test t1){
    int sum=t1.a+t1.b;
    cout<<"The sum of the value a and b here is "<<sum<<endl;
}
int main(){
    test t1;
    t1.getData();
    sum(t1);
}