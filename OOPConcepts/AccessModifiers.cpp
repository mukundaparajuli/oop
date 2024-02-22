#include <iostream>
using namespace std;
class Student
{

    int grade;
    char section;

public:
    void setter(int grade, char section)
    {
        this->grade = grade;
        this->section = section;
    }
    void getter()
    {
        cout << "Ramesh studies in class " << grade << " and " << section << endl;
    }
};
int main()
{
    Student Ramesh;

    // incase the data members are public we can access the data member like this
    // Ramesh.grade = 10;
    // Ramesh.section = 'A';

    // cout << "Ramesh studies in class " << Ramesh.grade << " and section " << Ramesh.section << endl;

    // if the data memebers are private we need to use getter and setter to get and set the data
    Ramesh.setter(12, 'C');
    Ramesh.getter();
}