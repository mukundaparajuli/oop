#include <iostream>
using namespace std;
class Student
{
public:
    int grade;
    char section;
};
int main()
{
    // we can statically allocate the memory for an object like this
    Student Ram;

    // er can dynamically allocate the memory for an object like this
    Student *Shyam = new Student;

    // Here Shyam will store the memory location of the new object
    cout << "Shyam= " << Shyam << endl;

    // if we want to access any data member we will need to do this since Shyam contains the memeory location of object
    (*Shyam).grade = 12;
    // or we can do something like this as well
    Shyam->section = 'D';

    cout<<"Shyam studies in class "<<Shyam->grade<<" and section "<<Shyam->section<<endl;
}