// Array of objects
#include<iostream>
using namespace std;
class Student{
    char name[40];
    int roll;
    float marks;
    public:
        void getData(){
            cout<<"Enter name: ";cin>>name;
            cout<<"Enter roll: ";cin>>roll;
            cout<<"Enter marks: ";cin>>marks;
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
    Student s[4];
    for(int i=0; i<4; i++) s[i].getData();
    for(int i=0; i<4; i++) s[i].showData();
    return 0;
}