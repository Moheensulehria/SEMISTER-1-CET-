#include <iostream>
using namespace std;

int main()
{
    double balance, withdraw;

    cout << "Enter your account balance: ";
    cin >> balance;

    cout << "Enter the amount you want to withdraw: ";
    cin >> withdraw;

    if (withdraw <= balance) 
	{
        balance -= withdraw; 
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: " << balance << endl;
    }
    
    if (withdraw > balance)
	{
        cout << "Insufficient balance." << endl;
    }

    return 0;
}

