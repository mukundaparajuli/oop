#include<iostream>
using namespace std;
class Person{
    protected:
        char name[40];
    public:
        void getPerson(){
            cout<<"Enter the name: ";cin>>name;
        }
};
class Student: public Person{
    protected:
        int roll;
        int grade;
    public:
        void getStudent(){
        cout<<"Enter the roll no :"; cin>>roll;
        cout<<"Enter the grade: "; cin>>grade;
        }
};
class Result: public Student{
    protected:
        int marks;
    public:
        void getResult(){
            cout<<"Enter the marks: "; cin>>marks;
        }
        void showResult(){
            cout<<"Name: "<<name<<endl
                <<"Class: "<<grade<<endl
                <<"Roll: "<<roll<<endl
                <<"Marks: "<<marks<<endl;
        }
};
int main(){
    Result R1;
    R1.getPerson();
    R1.getStudent();
    R1.getResult();
    R1.showResult();
}