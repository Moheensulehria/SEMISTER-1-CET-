#include <iostream>
using namespace std;

int main()
{
    int choice;
    int amount, converted;

    cout << "Enter amount in USD: ";
    cin >> amount;

    cout << "Choose currency to convert to:\n";
    cout << "1. PKR\n";
    cout << "2. INR\n";
    cout << "3. Euro\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Switch statement
    switch(choice)
	{
        case 1: // USD to PKR
            converted = amount * 300;  // Example rate: 1 USD = 300 PKR
            cout << "Amount in PKR: " << converted;
            break;

        case 2: // USD to INR
            converted = amount * 83;   // Example rate: 1 USD = 83 INR
            cout << "Amount in INR: " << converted;
            break;

        case 3: // USD to Euro
            converted = amount * 0.92; // 0.92 will be truncated to 0 in integer division
            cout << "Amount in Euro: " << converted;
            break;

        default:
        cout << "Invalid choice!";
    }

    return 0;
}

