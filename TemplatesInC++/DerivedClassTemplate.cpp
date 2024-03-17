// while using the member of templated base class from a derived class we need to use "this" keyword or 
// explicitly mention the name of the base class
#include<iostream>
using namespace std;

template<class T>
class Base{
    protected:
    T x;
        
};
template<class T>
class Derived: public Base<T>{
    public:
        void getData(T y){
            this->x=y;
        }
        void showData(){
            cout<<"The value of x in the base class is:"<<this->x<<endl;
        }
};
int main(){
    Derived <int>d1;
    d1.getData(5);
    d1.showData();
    return 0;
}