#include <iostream>
using namespace std;

int main()
{
    int num = 42;

    void* ptr = &num;

    cout << "Value of num using void pointer: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}

