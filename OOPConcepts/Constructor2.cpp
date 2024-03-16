// Parameterized constructor
#include<iostream>
#include<cstring>
using namespace std;
class Student{
    char name[40];
    int roll;
    int grade;
    public:
        Student(const char* name, int roll, int grade){
            strcpy(this->name, name);
            this->roll=roll;
            this->grade=grade;
        }
        void display(){
            cout<<"----------------------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Grade: "<<grade<<endl;
            cout<<"----------------------"<<endl;
        }
};
int main(){
    Student s1("Mukunda", 10, 24);
    Student s2("Harihar", 12, 23);
    s1.display();
    s2.display();
    return 0;
}