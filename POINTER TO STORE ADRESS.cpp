#include <iostream>
using namespace std;

int main()
{
    int num = 25;

    int* ptr = &num;
    cout << "Value of num using pointer: " << *ptr << endl;

    return 0;
}

