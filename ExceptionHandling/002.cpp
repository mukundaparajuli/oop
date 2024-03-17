#include<iostream>
using namespace std;
int main(){
    int num, den;
    cout<<"Enter the value of numberator and denominator: "; cin>>num>>den;
    try{
        if(den!=0){
            cout<<num/den;
            }
        else throw(den);
    }
    catch(int i) {
        cout<<"Exception occured: "<<i<<endl;
    }
}