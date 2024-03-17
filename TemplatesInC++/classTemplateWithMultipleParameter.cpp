// class template with multiple parameter
#include<iostream>
using namespace std;
template<class T1, class T2>
class Distance{
    T1 feet;
    T2 inches;
    public:
        Distance(T1 x, T2 y){
            feet=x;
            inches=y;
        }
        void showData(){
            cout<<"The distance is: "<<feet<<" and "<<inches<<" inches"<<endl;
        }
};
int main(){
    Distance <int, int> d1(2,3);
    Distance <int, float> d2(34,3.45);
    d1.showData();
    d2.showData();
}