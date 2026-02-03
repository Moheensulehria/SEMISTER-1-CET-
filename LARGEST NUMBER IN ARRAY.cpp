#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    int arr[N];

    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < N; i++)
	{
        if (arr[i] > largest)
		{
            largest = arr[i];
        }
    }

    // Display result
    cout << "Largest number in the array is: " << largest << endl;

    return 0;
}

