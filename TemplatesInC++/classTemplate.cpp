// class template
// class which has a member of template type
// class templates are associated with generic types

#include<iostream>
using namespace std;
template<class T>
class Rectangle{
    T length, breadth;
    public:
        Rectangle(T l=0, T b=0){
            length=l;
            breadth=b;
        }
        T Area(){
            return length*breadth;
        }
};
int main(){
    Rectangle <int>r1(4,5); 
    Rectangle <float>r2(2.2, 3.3);
    cout<<r1.Area()<<endl;
    cout<<r2.Area()<<endl;
    return 0;
}