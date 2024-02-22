#include <iostream>
#include<stdexcept>
// #include <exception>
using namespace std;
void DepositAmount(int &amount)
{
    int deposit;
    try
    {
        cout << "Enter the amount you would like to deposit: " << endl;
        cin >> deposit;
        if (deposit < 500)
        {
            throw invalid_argument("Deposit amount cannot be less than 500!");
        }
        amount += deposit;
        cout << "Your Current Balance is: Rs" << amount << endl;
    }
    catch (exception &e)
    {
        cout << e.what();
    }
}
void withdraw(int &amount)
{
    int withdrawl;
    try
    {
        cout << "Enter the amount you would like to withdraw: " << endl;
        cin >> withdrawl;
        if (withdrawl < 500)
        {
            throw invalid_argument("Withdrawl amount cannot be less than 500");
        }
        else if (withdrawl > amount)
        {
            throw runtime_error("Insufficient Balance!");
        }
        amount -= withdrawl;
        cout << "Your current balance is: Rs" << amount << endl;
    }
    catch (exception &e)
    {
        cout << e.what();
    }
}
int main()
{
    int amount = 1000;
    int deposit, withdrawl;
    int ans;
    try
    {
        cout << "What service would you like to get?" << endl
             << "1. Deposit Amount" << endl
             << "2. Withdraw Amount" << endl;
        cin >> ans;
        if (ans == 1)
        {
            DepositAmount(amount);
        }
        else if (ans == 2)
        {
            withdraw(amount);
        }
        else
        {
            throw runtime_error("Invalid Input!");
        }
    }
    catch (exception &e)
    {
        cout << e.what();
    }
    return 0;
}