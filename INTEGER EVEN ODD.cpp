#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter an integer : ";
    cin >> num1;

    
    cout << "Enter an integer : ";
    cin >> num2;

    
    cout << "The number " << num1 << " is " << (num1 % 2 == 0 ? "even" : "odd") << endl;

    cout << "The number " << num2 << " is " << (num2 % 2 == 0 ? "even" : "odd") << endl;

    return 0;
}

