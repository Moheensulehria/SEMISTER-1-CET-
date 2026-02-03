#include <iostream>
using namespace std;

int main()
{
    int choice;
    double radius, length, width, base, height, area;

    cout << "Select a shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice)
	{
        case 1: // CIRCLE
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;

        case 2: // RECTANGLE
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area << endl;
            break;

        case 3: // TRIANGLE
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area << endl;
            break;

        default:
            cout << "Error: Invalid choice! Please choose 1, 2, or 3." << endl;
    }

    return 0;
}

