#include <iostream>
using namespace std;

int main() 
{
	char signal;

    cout << "Enter the signal color (R/G/Y): ";
    cin >> signal;

    if (signal == 'R' || signal == 'r')
        cout << "Stop" << endl;

    if (signal == 'G' || signal == 'g')
        cout << "Go" << endl;

    if (signal == 'Y' || signal == 'y')
        cout << "Slow Down" << endl;

    return 0;
}

