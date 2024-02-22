#include <iostream>
using namespace std;

class Student
{
    int grade;
    char section;

public:
    // if we do something like this  we will get the result to be right but the actual thing happening here is not whaat we actually want
    // in this case the grade and section we are getting as an argument are the one which are getting replaced with themselves the actual value of the class is not changed
    // and the one that we are printing are also not the actual value of the object but just the arguments of the constructor
    // so if we try to access the value outside the constructor we will get the garbage value since the actual grade and section are never intitalized
    // to avoid this situation 'this' keyword comes into the picture
    //'this' stores the memory locaation of the object
    // Student(int grade, char section)
    // {
    //     grade = grade;
    //     section = section;
    //     cout << "The student studies in class " << grade << " " << section << endl;
    // }

    // usign this keyword
    Student(int grade, char section)
    {
        (*this).grade = grade;
        (*this).section = section;
        cout << "The student studies in class " << grade << " " << section << endl;
    }
    void put()
    {
        cout << "the memory location of the object is " << this << endl;
        cout << "The student studies in class " << grade << " " << section << endl;
    }
};
int main()
{
    Student s1(10, 'B');
    s1.put();
}

//'this' keyword is a memory pointer for the object