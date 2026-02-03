#include <iostream>
using namespace std;

int main()
{
    char grade;
    int years;
    double basicSalary = 0, bonus = 0, grossSalary = 0, tax = 0, netSalary = 0;

    cout << "Enter employee grade (A, B, C): ";
    cin >> grade;

    cout << "Enter years of service: ";
    cin >> years;

    if (grade == 'A' || grade == 'a')
        basicSalary = 50000;
    if (grade == 'B' || grade == 'b')
        basicSalary = 30000;
    if (grade == 'C' || grade == 'c')
        basicSalary = 20000;

    if (!(grade == 'A' || grade == 'a' ||
          grade == 'B' || grade == 'b' ||
          grade == 'C' || grade == 'c')) 
	{
        cout << "Invalid grade entered!" << endl;
        return 0;
}

    if (years >= 10)
        bonus = 0.10 * basicSalary;
    if (years >= 5 && years <= 9)
        bonus = 0.05 * basicSalary;
    if (years < 5)
        bonus = 0;

    grossSalary = basicSalary + bonus;

    if (grossSalary > 40000)
        tax = 0.20 * grossSalary;
    if (grossSalary >= 30000 && grossSalary <= 40000)
        tax = 0.10 * grossSalary;
    if (grossSalary < 30000)
        tax = 0;

    netSalary = grossSalary - tax;

    cout << "\n--- Salary Details ---\n";
    cout << "Basic Salary : $" << basicSalary << endl;
    cout << "Bonus        : $" << bonus << endl;
    cout << "Gross Salary : $" << grossSalary << endl;
    cout << "Tax Deducted : $" << tax << endl;
    cout << "Net Salary   : $" << netSalary << endl;

    return 0;
}

