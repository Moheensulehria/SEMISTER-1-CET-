#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
	{

        case '+':
            cout << "Result = " << (num1 + num2);
            break;

        case '-':
            cout << "Result = " << (num1 - num2);
            break;

        case '*':
            cout << "Result = " << (num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                cout << "Result = " << (num1 / num2);  // integer division
            else
                cout << "Error: Division by zero is not allowed.";
            break;

        default:
            cout << "Error: Invalid operator.";
    }

    return 0;
}

