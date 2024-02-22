#include <iostream>
using namespace std;
class student
{
    int id;
    string name;

public:
    void getStu()
    {
        cout << "Enter the id of the student: " << endl;
        cin >> id;
        cout << "Enter the name of the student: " << endl;
        cin >> name;
    }
    void putStu()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }
};
class studentPh : public student
{
    int h, w;

public:
    void getPhy()
    {
        cout << "Enter the height and weight of the student: " << endl;
        cin >> h>> w;
    }
    void putPhy()
    {
        cout << "Height: " << h << endl;
        cout << "Weight: " << w << endl;
    }
};
int main()
{
    studentPh p1;
    p1.getStu();
    p1.getPhy();
    p1.putStu();
    p1.putPhy();
    return 0;
}