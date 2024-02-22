#include <iostream>
using namespace std;
class stu
{
    int id;
    char name[90];

public:
    void getStu()
    {
        cout << "Enter the id no of the student " << endl;
        cin >> id;
        cout << "Enter the name of the student " << endl;
        cin >> name;
    }
    void putStu()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }
};
class marks : public stu
{
protected:
    int phy, che, maths;

public:
    void getMarks()
    {
        cout << "Enter the marks of the student in " << endl;
        cout << "Phy: ";
        cin >> phy;
        cout << "Che: ";
        cin >> che;
        cout << "Maths: ";
        cin >> maths;
    }
    void putMarks()
    {
        cout << "Marks in: " << endl;
        cout << "Phy: " << phy << endl;
        cout << "Che: " << che << endl;
        cout << "Maths: " << maths << endl;
    }
};
class sports
{
protected:
    int sportsMarks;

public:
    void getSports()
    {
        int ans;
        cout << "did the student involved in sports? " << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> ans;
        if (ans == 1)
        {
            sportsMarks = 5;
        }
        else if (ans == 2)
        {
            sportsMarks = 0;
        }
        else
        {
            cout << "Invalid Input!" << endl;
        }
    }
};
class result : public marks, public sports
{
    int total;
    int avg;

public:
    void displayResult()
    {
        total = phy + che + maths;
        avg = total / 3;
        cout << "Total: " << total << endl;
        cout << "Average: " << avg << endl;
        cout << "Total with sports marks: " << total + sportsMarks << endl;
    }
};
int main()
{
    result r;
    r.getStu();
    r.getMarks();
    r.getSports();
    cout<<endl;
    cout<<endl;
    cout<<"-------------------------Result-------------------------"<<endl;
    r.putStu();
    r.putMarks();
    r.displayResult();
    cout<<endl;
    cout<<endl;
    return 0;
}