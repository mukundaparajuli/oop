// Multiple Inheritance
#include<iostream>
using namespace std;

class Student{
    protected:
        char name[100];
        int roll;
        int id;
    public: 
        void getData(){
            cout<<"Enter the name: "; cin>>name;
            cout<<"Enter the roll: "; cin>>roll;
            cout<<"Enter the id: "; cin>>id;
        }
};
class Employee{
    protected:
        char organization[100];
    public:
        void setData(){
            cout<<"Enter the name of the organization: "; cin>>organization;
        }
};
class Officer: public Student, public Employee{
    protected:
        int workHour;
    public:
        void getOfficer(){
            cout<<"Enter the total working hours: "; cin>>workHour;
        }
        void putOfficer(){
            cout<<"Name: "<<name<<endl
                <<"Roll: "<<roll<<endl
                <<"Id: "<<id<<endl
                <<"Organization: "<<organization<<endl
                <<"Work Hour: "<<workHour<<endl;
        }
};
int main(){
    Officer o;
    o.getData();
    o.setData();
    o.getOfficer();
    o.putOfficer();
    return 0;
}