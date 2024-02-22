#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    float salary;

public:
    void getData()
    {
        cout << "Enter your name, id and salary respectively" << endl;
        cin >> name >> id >> salary;
    }
    void showData()
    {
        cout << "Name: " << name << endl
             << "Id: " << id << endl
             << "Salary: " << salary << endl;
        cout << "-------------------------------" << endl;
    }
};
int main()
{
    Employee e[3];
    for (int i = 0; i < 3; i++)
    {
        e[i].getData();
    }
    for (int i = 0; i < 3; i++)
    {
        e[i].showData();
    }
}