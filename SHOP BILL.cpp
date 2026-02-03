#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;
    double item5 = 3.95;

    const double TAX_RATE = 0.06;

    cout << fixed << setprecision(2);
    cout << "Item 1: $" << item1 << endl;
    cout << "Item 2: $" << item2 << endl;
    cout << "Item 3: $" << item3 << endl;
    cout << "Item 4: $" << item4 << endl;
    cout << "Item 5: $" << item5 << endl;

    double subtotal = item1 + item2 + item3 + item4 + item5;

    double sales_tax = subtotal * TAX_RATE;

    double total = subtotal + sales_tax;

    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Sales Tax (6%): $" << sales_tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}

