#include <iostream>
using namespace std;

void displayMenu()
{
    cout << "\n------ Restaurant Menu ------\n";
    cout << "1. Burger        Rs. 250\n";
    cout << "2. Pizza         Rs. 800\n";
    cout << "3. Fries         Rs. 150\n";
    cout << "4. Sandwich      Rs. 300\n";
    cout << "5. Soft Drink    Rs. 100\n";
    cout << "6. Exit\n";
}

double calculateItemCost(double price, int quantity)
{
    return price * quantity;
}

double calculateFinalBill(double total)
{
    double tax = total * 0.10;
    return total + tax;
}

int main()
{
    int choice, quantity;
    double price = 0, totalBill = 0;

    do
	{
        displayMenu();
        cout << "Select an item: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
		{
            cout << "Enter quantity: ";
            cin >> quantity;

            switch (choice)
			{
                case 1: price = 250; break;
                case 2: price = 800; break;
                case 3: price = 150; break;
                case 4: price = 300; break;
                case 5: price = 100; break;
            }

            totalBill += calculateItemCost(price, quantity);
            cout << "Item added to bill.\n";
        }
        else if (choice != 6)
		{
            cout << "Invalid choice! Try again.\n";
        }

    }
	while (choice != 6);

    double finalAmount = calculateFinalBill(totalBill);

    cout << "\n------ Final Bill ------\n";
    cout << "Total (Before Tax): Rs. " << totalBill << endl;
    cout << "Tax (10%): Rs. " << totalBill * 0.10 << endl;
    cout << "Total Amount Payable: Rs. " << finalAmount << endl;

    return 0;
}

