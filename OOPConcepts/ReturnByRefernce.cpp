// WAP using the concept of return by refernce to set the largest temp to 100
#include<iostream>
using namespace std;
int &large(int &p,int &q){
    if(p>q) return p;
    else return q;
}
int main(){
    int a, b;
    cout<<"Enter two temperatures "<<endl;
    cin>>a>>b;
    large(a, b)=100;
    cout<<"The largest temperature is: "<<large(a,b);
    return 0;
}