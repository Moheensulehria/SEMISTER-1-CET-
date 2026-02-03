#include <iostream>
using namespace std;

int main()
{
    int choice;
    int radius, length, width, base, height;
    int area;

    cout << "Select Shape to Calculate Area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice)
	{
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            area = 3 * radius * radius; 
            cout << "Area of Circle = " << area;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area;
            break;

        case 3:
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            area = (base * height) / 2;
            cout << "Area of Triangle = " << area;
            break;

        default:
        cout << "Error: Invalid choice!";
    }

    return 0;
}

