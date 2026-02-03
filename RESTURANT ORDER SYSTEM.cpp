#include <iostream>
using namespace std;

int main()
{
    int choice, subChoice;
    char again;
    double totalBill = 0;
    double quantity;

    do {
        cout << "\n====== RESTAURANT MENU ======\n";
        cout << "1. Chicken Items\n";
        cout << "2. BBQ Items\n";
        cout << "3. Drinks\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
		{

        case 1:
            cout << "\n--- Chicken Items ---\n";
            cout << "1. Chicken Karahi (Rs. 1800 per KG)\n";
            cout << "2. Chicken Handi (Rs. 2000 per KG)\n";
            cout << "Enter item choice: ";
            cin >> subChoice;

            cout << "Enter quantity (in KG): ";
            cin >> quantity;

            if (subChoice == 1)
                totalBill += quantity * 1800;
            else if (subChoice == 2)
                totalBill += quantity * 2000;
            else
                cout << "Invalid item choice!\n";
            break;

        case 2:
            cout << "\n--- BBQ Items ---\n";
            cout << "1. Chicken Tikka (Rs. 500 per piece)\n";
            cout << "2. Malai Boti (Rs. 700 per plate)\n";
            cout << "Enter item choice: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1)
                totalBill += quantity * 500;
            else if (subChoice == 2)
                totalBill += quantity * 700;
            else
                cout << "Invalid item choice!\n";
            break;

        case 3:
            cout << "\n--- Drinks ---\n";
            cout << "1. Soft Drink (Rs. 120)\n";
            cout << "2. Mineral Water (Rs. 80)\n";
            cout << "Enter item choice: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1)
                totalBill += quantity * 120;
            else if (subChoice == 2)
                totalBill += quantity * 80;
            else
                cout << "Invalid item choice!\n";
            break;

        default:
            cout << "Invalid menu choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> again;

    }
	    while (again == 'y' || again == 'Y');

    cout << "\n==============================\n";
    cout << "Total Bill to Pay: Rs. " << totalBill << endl;
    cout << "Thank you for ordering!\n";

    return 0;
}

