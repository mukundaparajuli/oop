// DMA or Dynamic Memory Allocation is a feature of c++ that allows an user to allocate a memory location
// for a data to be stored without any need of variable and the address can be released when the data is no
// longer required in the program

// DMA is very helpful while programming an efficient softwares since it saves a lot of space in RAM

// Syntax

// className = *ptr_variable;
// ptr_variable=new className;

// once the work is done we can simply release the memory like this

// delete ptr_variable


#include<iostream>
using namespace std;
class Student{
    char name[40];
    int roll;
    int marks;
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
    Student *ptr;
    ptr=new Student;
    ptr->getData();
    ptr->showData();
    delete ptr;
}