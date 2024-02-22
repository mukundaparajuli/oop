#include<iostream>
using namespace std;
class test{
    int a=12;
    float b=1.3;
    public:
    void get(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    void put(){
        cout<<"The value of a and b are "<<a<<" and "<<b<<" respectively."<<endl;
    }
    void display(){
        b=a;
        cout<<"a given to b: "<<b;
    }
};
int main(){
    // test t1;
    // t1.get();
   int a=12;
    float b=1.3;
    cout<<static_cast<float>(a)<<endl;
    return 0;
}