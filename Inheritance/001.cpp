#include<iostream>
using namespace std;

class Student{
    protected:
        char name[20];
        int grade;
        int roll;
    public:
        void getData(){
            cout<<"Enter the name: ";cin>>name;
            cout<<"Enteer the grade: ";cin>>grade;
            cout<<"Enter the roll: "; cin>>roll;
        }
        void putData(){
            cout<<"Name: "<<name<<endl
                <<"Grade: "<<grade<<endl
                <<"Roll: "<<roll<<endl;
        }
};
class Leader: public Student{
    protected:
        char club[30];
        int cId;
    public:
        void getLeader(){
            cout<<"Enter the name of the club: "; cin>>club;
            cout<<"Enter the club id: "; cin>>cId;
        }
        void putLeader(){
            cout<<endl<<endl;
            cout<<"Name: "<<name<<endl
                <<"Grade: "<<grade<<endl
                <<"Roll: "<<roll<<endl
                <<"Club Name: "<<club<<endl
                <<"Club Id: "<<cId<<endl;
        }
};
int main(){
    Leader l;
    l.getData();
    l.getLeader();
    l.putLeader();
    return 0;
}