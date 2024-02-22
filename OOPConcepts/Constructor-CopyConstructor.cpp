#include <iostream>
using namespace std;

class Student
{
    int grade;
    char section;

public:
    // we can simply create a copy constructor by ourself like this
    // we must pass the data by pass by reference method
    // if we pass the object by pass by value method a copy of the object will be created and to create that copied object the same function is called which has a varaibale temp and an infinite loop will occur so we will get an error
    Student(Student &temp)
    {
        this->grade = temp.grade;
        this->section = temp.section;
    }

    Student(int grade, char section)
    {
        this->grade = grade;
        this->section = section;
    }
    void putData()
    {
        cout << "The student studies in class " << grade << " and section " << section << endl;
    }
};
int main()
{
    Student s1(12, 'c');

    //  there remains a copy constructor by default
    //  as soon as a copy constuctor is created by the programmer the default one is destroyed
    //  you can simply invoke the copy constructor like this
    //  the data of s1 object will be copied to the s2 object
    Student s2(s1);
    s2.putData();
    return 0;
}