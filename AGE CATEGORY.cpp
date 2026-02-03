#include <iostream>
using namespace std;

int main() {
    int age;
    int i = 0;

while (i < 3)
{
cin >> age;

string category = (age < 13) ? "Child" :(age <= 19) ? "Teenager" : "Adult";

cout << "Age " << age << " falls under the category: " << category << endl;i++;
}

    return 0;
}

