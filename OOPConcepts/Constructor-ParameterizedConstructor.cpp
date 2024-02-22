#include <iostream>
using namespace std;

class Student
{
    int grade;
    char section;

public:
    Student()
    {
        cout << "Default constructor is called" << endl;
    }
    Student(int x, int y)
    {
        grade = x;
        section = y;
        cout << "The grade of the student is " << grade << endl;
        cout << "The section of the student is " << section << endl;
    }
};
int main()
{
    Student s(10, 'B');
    Student s2;
    return 0;
}

// parameterized constructor is the contructor having parameters
// when an object is made for the class having parameterized contructor we will have to pass the arguments
// since the default constructor is removed as soon as we create a parameterized constructor when we declare an object without passing any arguments we will get an error
// we can create two or more constructor for a single class and object should be created in the same way considering the type of the constuctor