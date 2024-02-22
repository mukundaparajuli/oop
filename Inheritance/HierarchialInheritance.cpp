#include <iostream>
using namespace std;
class Acc
{
    char name[90];
    int age;

public:
    void getUserInfo()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the age: " << endl;
        cin >> age;
    }
    void putUserInfo()
    {
        cout << "User Name: " << name << endl;
        cout << "User Age: " << age << endl;
    }
};
class Saving : public Acc
{
    float balance;

public:
    void getBalance()
    {
        cout << "Enter the balance you want to deposit in your Saving account: " << endl;
        cin >> balance;
        if (balance <= 500.00)
        {
            cout << "Invalid Input! Amount cannot be less than 500" << endl;
        }
        else
        {
            cout << "Your saving account has been created successfully!" << endl;
        }
    }
};
class Current : public Acc
{
    float balance;

public:
    void getBalance()
    {
        cout << "Enter the balance you want to deposit in your Saving account: " << endl;
        cin >> balance;
        if (balance <= 1000.00)
        {
            cout << "Invalid Input! Amount cannot be less than 1000" << endl;
        }
        else
        {
            cout << "Your current account has been created successfully!" << endl;
        }
    }
};
int main()
{
    int type;
    cout << "Enter the type of account you would like to create: " << endl;
    cout << "1. Saving Account " << endl;
    cout << "2. Current Account " << endl;
    cin>>type;
    if (type == 1)
    {
        Saving s1;
        s1.getUserInfo();
        s1.getBalance();
    }
    else if (type == 2)
    {
        Current c1;
        c1.getUserInfo();
        c1.getBalance();
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }
}