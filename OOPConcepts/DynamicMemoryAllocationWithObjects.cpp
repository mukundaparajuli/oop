#include<iostream>
#include<cstring>
using namespace std;
class Student{
    public:
    char name[40];
    int roll;
};
int main(){
    // defining a ptr of type student
    Student *ptr;
    ptr=new Student;
    strcpy((*ptr).name, "Mukunda");
    (*ptr).roll=24;
    cout<<"The name of the student is "<<ptr->name<<endl;
    cout<<"The roll no. of the student is "<<ptr->roll<<endl;
}