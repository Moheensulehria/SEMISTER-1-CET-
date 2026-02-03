#include <iostream>
using namespace std;

int main()
{
    int choice;
    double usd, converted;

    // LETING THE RATES
    const double PKR_RATE = 280.50; 
    const double INR_RATE = 83.20;  
    const double EURO_RATE = 0.92;  

    cout << "Currency Converter (USD to Others)\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to Euro\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch (choice)
	{
        case 1:
            converted = usd * PKR_RATE;
            cout << "Amount in PKR = " << converted << endl;
            break;

        case 2:
            converted = usd * INR_RATE;
            cout << "Amount in INR = " << converted << endl;
            break;

        case 3:
            converted = usd * EURO_RATE;
            cout << "Amount in Euro = " << converted << endl;
            break;

        default:
            cout << "Error: Invalid option! Please choose 1, 2, or 3." << endl;
    }

    return 0;
}

