#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int sum = 0;
    float average;

    for (int i = 0; i < size; i++)
	{
        sum += arr[i];
    }

    average = (float)sum / size;

    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}

