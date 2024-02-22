#include<iostream>
using namespace std;
template <class T>
class vector{
    T *arr;
    public: vector(T *arr){
        cout<<"Code to be executed";
    }
};
int main(){
    vector<int> myVector();
    vector<float> myFloatVector();
    return 0;
}