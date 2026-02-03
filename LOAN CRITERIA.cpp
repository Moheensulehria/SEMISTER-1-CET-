#include <iostream>
using namespace std;

int main() 
{
    double salary;
    int experience;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your years of work experience: ";
    cin >> experience;

    if (salary >= 25000)
	{
        cout << "You are eligible for the loan.GIVE YOUR DETAILS" << endl;
    }
    else if (salary >= 20000 && experience > 5) {
        cout << "You are eligible for the loan." << endl;
    }
    else
	{
        cout << "You are NOT eligible for the loan." << endl;
    }

     return 0;
}

