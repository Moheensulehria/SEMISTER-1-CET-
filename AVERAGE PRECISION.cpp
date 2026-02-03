#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double test1 = 85.5;
    double test2 = 90.75;
    double test3 = 88.25;
    
    double average = (test1 + test2 + test3) / 3;

    cout << fixed << setprecision(2);
    cout << "The average of " << test1 << ", " << test2 << " and " << test3 << " = " << average << endl;
    return 0;
}

