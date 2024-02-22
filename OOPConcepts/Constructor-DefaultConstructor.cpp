#include <iostream>
using namespace std;
class Student
{
    int grade;
    char section;

public:
    // a default contructor
    // we define a constructor as a function whose name is same as that of class
    // constructor is called as soon as the object is created
    Student()
    {
        cout << "constructor is called" << endl;
    }
};
int main()
{
    Student s;
}

// when we create a class a constructor is built there by default which performs no task
// as soon as we create our own constructor the default one will be destroyed and the new constructor will perform other task
// constructor can be a simple/default contructor that takes no argument
// or there can be a parameterized contructor that takes some argument when the object is created
// a constuctor has no return type and is invoked when the object is creaated