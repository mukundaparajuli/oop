// DMA for an array of objects
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
    int n;
    cout<<"Enter the no. of students you would like to add the details of: ";cin>>n;
    Student *ptr;
    ptr=new Student[n];
    for(int i=0; i<n; i++){
        ptr[i].getData();
    }
    for(int i=0; i<n; i++){
        ptr[i].showData();
    }
    delete []ptr;
    return 0;
}