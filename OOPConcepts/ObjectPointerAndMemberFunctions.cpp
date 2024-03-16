#include<iostream>
using namespace std;
class Student{
    char name[49];
    int roll;
    float marks;
    public:
        void getData(){
            cout<<"Enter the name: ";cin>>name;
            cout<<"Enter the roll: ";cin>>roll;
            cout<<"Enter the marks: ";cin>>marks;
        }
        void showData(){
            cout<<"---------------------"<<endl
                <<"Name: "<<name<<endl
                <<"Roll No.: "<<roll<<endl
                <<"Marks: "<<marks<<endl
                <<"---------------------"<<endl;
        }
};
int main(){
    Student s;
    Student *ptr;
    ptr=&s;

    ptr->getData();
    ptr->showData();
    // (*ptr).getData();
    // (*ptr).showData();
}