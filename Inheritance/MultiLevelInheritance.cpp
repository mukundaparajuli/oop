#include <iostream>
using namespace std;

class student
{
protected:
    int id;
    char name[40];

public:
    void getStu()
    {
        cout << "Enter the name and the id of the student " << endl;
        cin >> name>> id;
    }
    void putStu()
    {
        cout << "The Details of the student are: " << endl;
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }
};
class marks : public student
{
protected:
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter the marks for each subject of " << name << endl;
        cin >> m1 >> m2 >> m3;
    }
    void putMarks()
    {
        cout << "Marks m1: " << m1 << endl;
        cout << "Marks m2: " << m2 << endl;
        cout << "Marks m3: " << m3 << endl;
    }
};
class result : public marks
{
    int total;
    float avg;

public:
    void displayResult()
    {
        total = m1 + m2 + m3;
        avg = total / 3;
        cout << "-------------------Result of "<<name<<"----------------------"<<endl;
        cout << "The total is " << total << endl;
        cout << "The average is " << avg << endl;
    }
};
int main()
{
    result r;
    r.getStu();
    r.getMarks();
    r.putStu();
    r.putMarks();
    r.displayResult();
}