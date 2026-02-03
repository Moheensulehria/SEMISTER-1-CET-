#include <iostream>
using namespace std;
void swapNumbers(int* a, int* b)
{
    int temp = *a; 
    *a = *b;       
    *b = temp;  
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swapNumbers(&x, &y);

    cout << "After swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

