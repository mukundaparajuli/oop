// default constructor
#include<iostream>
using namespace std;
class Student{
    public:
    Student(){
        cout<<"Default constructor is called!"<<endl;
    }
};
int main(){
    Student Ram;
    return 0;
}