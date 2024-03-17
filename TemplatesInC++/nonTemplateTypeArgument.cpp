// we have seen that a class template can have multiple arguments
// we can use a non template argument as well in the class
// which will be cleared byy following example
#include<iostream>
using namespace std;
template <class T, int size>
class Array{
    T a[size];
    public:
        void getData(){
            cout<<"Enter the elements in the array: "<<endl;
            for(int i=0;i<size; i++){
                cin>>a[i];
            }
        }
        void putData(){
            cout<<"The elements in the array are: "<<endl;
            for(int i=0; i<size; i++) cout<<a[i];
        }
};
int main(){
    Array <int ,6>a;
    a.getData();
    a.putData();
    return 0;
}
