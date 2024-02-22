#include <iostream>
using namespace std;

class student
{
protected:
    char name[40];
    int id;

public:
    void getStu()
    {
        cout << "Enter the name of the student :" << endl;
        cin >> name;
        cout << "Enter the id of the student :" << endl;
        cin >> id;
    }
};
class marks
{
protected:
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter the marks of the student " << endl;
        cin >> m1 >> m2 >> m3;
    }
    void showMarks()
    {
        cout << "Marks 1" << m1 << endl;
        cout << "Marks 3" << m2 << endl;
        cout << "Marks 3" << m3 << endl;
    }
};
class result : public student, public marks
{
    int total;
    float avg;

public:
    void displayResult()
    {
        total = m1 + m2 + m3;
        avg = total / 3.0;
        cout << "The total marks of the student " << name << " is:" << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << avg << endl;
    }
};
int main(){
    result r1;
    r1.getStu();
    r1.getMarks();
    r1.displayResult();
    return 0;
}
