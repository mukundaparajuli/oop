#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    char *name;
    int grade;
    char section;

public:
    Student()
    {
        name = new char[100];
    }
    void setData(char name[], int grade, char section)
    {
        strcpy(this->name, name);
        this->grade = grade;
        this->section = section;
    }
    void putData()
    {
        cout << endl
             << "Name: " << name << endl
             << "Class: " << grade << endl
             << "section: " << section << endl;
    }
};
int main()
{
    Student s1;
    Student s2;
    char ch[10] = "Mukunda";
    s1.setData(ch, 10, 'B');

    // assignement copy operator
    s2 = s1;
    s2.putData();
}