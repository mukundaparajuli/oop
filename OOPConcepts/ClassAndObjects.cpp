#include <iostream>
using namespace std;

// creating a class
class Student
{
public: // access modifier
        // state or property
    int grade;
    char section;
};
int main()
{

    // intializing an object
    Student Ram;

    // accessing the state of the object
    Ram.grade = 10;
    Ram.section = 'B';

    cout << Ram.grade << endl;
    cout << Ram.section << endl;
}

/*
class is a user made data tyype
composed of mainly two things: state or property and behaviour or method
an object is an instance of the class
access modifier determine the accessibility of the data members or state outside the class
if the access modifier is private you cannot access the data member outside the class and
if the access modifier is public you can access the data member outside the class as well
*/