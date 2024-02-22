#include <iostream>
using namespace std;

class Student
{
    int id;
    char name[90];

public:
    void getStudentDetails()
    {
        cout << "Enter the name of the student: " << endl;
        cin >> name;
        cout << "Enter the id of the student: " << endl;
        cin >> id;
    }
    void putStudentDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }
};
class Academics : virtual public Student
{
protected:
    int phy, che, maths;

public:
    void getMarks()
    {
        cout << "Enter the marks for each subject " << endl;
        cout << "Phy: ";
        cin >> phy;
        cout << "Che: ";
        cin >> che;
        cout << "Maths: ";
        cin >> maths;
    }
    void putMarks()
    {
        cout << "Marks are: " << endl;
        cout << "Physics: " << phy << endl;
        cout << "Chemistry: " << che << endl;
        cout << "Maths: " << maths << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int sportsMarks;

public:
    void getSports()
    {
        cout << "Enter the sports marks: " << endl;
        cin >> sportsMarks;
    }
};
class Result : public Academics, public Sports
{
    int total;
    int avg;

public:
    void displayResult()
    {
        getStudentDetails();
        getMarks();
        getSports();
        total = phy + che + maths;
        avg = total / 3;
        cout<<endl;
        cout<<endl;
        cout<<"--------------Total--------------------"<<endl;
        putStudentDetails();
        putMarks();
        cout << "Total Marks is: " << total << endl;
        cout << "Average Marks is: " << avg << endl;
        cout << "Total Marks with sports marks added is: " << total + sportsMarks << endl;
        cout<<endl;
        cout<<endl;
    }
};
int main()
{
    Result r;
    r.displayResult();
}
