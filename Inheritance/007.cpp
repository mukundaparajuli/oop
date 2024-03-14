#include<iostream>
using namespace std;

class Student{
    protected:
        char name[40];
        int roll;
    public:
        void getStudent(){
            cout<<"Enter the name: "; cin>>name;
            cout<<"Enter the roll: "; cin>>roll;
        }
};
class Internal: virtual public Student{
    protected:
        int marks1, marks2;
    public:
        void getInternal(){
            cout<<"Enter marks 1: "; cin>>marks1;
            cout<<"Enter marks 2: "; cin>>marks2;
        }
        void putInternal(){
            cout<<"Marks 1: "<<marks1<<endl
                <<"Marks 2: "<<marks2<<endl;
        }
};
class External: virtual public Student{
    protected:
        int marks3, marks4;
    public:
        void getExternal(){
            cout<<"Enter the marks 3"; cin>>marks3;
            cout<<"Enter the marks 4"; cin>>marks4;
        }
        void putExternal(){
            cout<<"Marks 3: "<<marks3<<endl
                <<"Marks 4: "<<marks4<<endl;
        }
};
class Result: public Internal, public External{
    protected:
        int total;
        float percentage;
    public:
        void calculateResult(){
            total=marks1+marks2+marks3+marks4;
            percentage=(total/400.0)*100.0;
        }
        void showResult(){
            cout<<"Name: "<<name<<endl
                <<"Roll: "<<roll<<endl;
                putInternal();
                putExternal();
            cout<<"Total Marks: "<<total<<endl
                <<"Percentage: "<<percentage<<endl;
        }
};
int main(){
    Result r1;
    r1.getStudent();
    r1.getInternal();
    r1.getExternal();
    r1.calculateResult();
    r1.showResult();
    return 0;
}