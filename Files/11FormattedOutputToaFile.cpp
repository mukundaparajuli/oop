// Writing object to a file
#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>

using namespace std;

class Student{
    char name[50];
    int age;
    float marks;
    public:
    void getDetails(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the marks: ";
        cin>>marks;
        // strcpy(this->name, name);
        // this->age=age;
        // this->marks=marks;
    }
    void putDetails(){
        cout<<setw(10)<<"Name: "<<name<<endl;
        cout<<setw(10)<<"Age: "<<age<<endl;
        cout<<setw(10)<<"Marks: "<<marks<<endl;
    }
};
int main(){
    // int n;
    Student s;
    fstream inout("student.txt", ios::in);
    // inout.open("student.txt", ios::in);
    // cout<<"Enter the number of students: "<<endl;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     s.getDetails();
    //     inout.write((char*) &s, sizeof(s));
    // }
    while(inout.get((char *) &s,sizeof(s))){
        s.putDetails();
    }

    inout.close();
}