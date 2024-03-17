#include<iostream>
using namespace std;
template<class T=int>
class Array{
    T a[5];
    public:
        void getData(){
            cout<<"Enter the elements in the array"<<endl;
            for(int i=0; i<5; i++) cin>>a[i];
        }
        void putData(){
            cout<<"The data in the array are: "<<endl;
            for(int i=0; i<5; i++) cout<<a[i];
        }
};
int main(){
    Array <>a;
    a.getData();
    a.putData();
}