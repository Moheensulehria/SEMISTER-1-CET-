#include <iostream>
using namespace std;

int main()
{
    int category;
    int itemChoice;
    int qty;
    int unitPrice = 0;
    int totalPrice;
    int discountPercent = 0;
    int discountAmount;
    int finalPrice;

    cout << "Choose category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter your choice (1-3): ";
    cin >> category;

    switch (category)
	{
        case 1:
            cout << "\nElectronics items:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cout << "Enter item number (1-3): ";
            cin >> itemChoice;

            switch (itemChoice)
			{
                case 1:
                    unitPrice = 1000;
                    break;
                case 2:
                    unitPrice = 700;
                    break;
                case 3:
                    unitPrice = 150;
                    break;
                default:
                    cout << "Invalid item choice in Electronics.\n";
                    return 0;
            }
            break;

        case 2:
            cout << "\nClothing items:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cout << "Enter item number (1-3): ";
            cin >> itemChoice;

            switch (itemChoice)
			{
                case 1:
                    unitPrice = 120;
                    break;
                case 2:
                    unitPrice = 40;
                    break;
                case 3:
                    unitPrice = 60;
                    break;
                default:
                    cout << "Invalid item choice in Clothing.\n";
                    return 0;
            }
            break;

        case 3:
            cout << "\nGroceries items:\n";
            cout << "1. Milk (1 Liter) ($2)\n";
            cout << "2. Bread (1 Loaf) ($3)\n";
            cout << "3. Eggs (1 Dozen) ($5)\n";
            cout << "Enter item number (1-3): ";
            cin >> itemChoice;

            switch (itemChoice) {
                case 1:
                    unitPrice = 2;
                    break;
                case 2:
                    unitPrice = 3;
                    break;
                case 3:
                    unitPrice = 5;
                    break;
                default:
                    cout << "Invalid item choice in Groceries.\n";
                    return 0;
            }
            break;

        default:
            cout << "Invalid category choice.\n";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> qty;
    totalPrice = unitPrice * qty;

    if (totalPrice < 100)
	{
        discountPercent = 0;
    }
	else if
	(totalPrice <= 500)
	{
        discountPercent = 10;
    }
	else
	{
        discountPercent = 20;
    }

    discountAmount = (totalPrice * discountPercent) / 100; 
    finalPrice = totalPrice - discountAmount;

    cout << "\n----- INVOICE -----\n";
    cout << "Unit price        : $" << unitPrice << "\n";
    cout << "Quantity          : " << qty << "\n";
    cout << "Total before disc : $" << totalPrice << "\n";
    cout << "Discount percent  : " << discountPercent << "%\n";
    cout << "Discount amount   : $" << discountAmount << "\n";
    cout << "Amount to pay     : $" << finalPrice << "\n";
    cout << "-------------------\n";

    return 0;
}

