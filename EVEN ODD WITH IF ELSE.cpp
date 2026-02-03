#include <iostream>
using namespace std;

void checkEvenOdd(int num)
{
    if (num % 2 == 0)
	{
        cout << num << " is Even" << endl;
    }
	else
	{
        cout << num << " is Odd" << endl;
    }
}

int main()
{
    checkEvenOdd(10);
    checkEvenOdd(7);
    checkEvenOdd(25);

    return 0;
}

