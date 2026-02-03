#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password, role;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "password123")
	{
        cout << "Authentication Successful!" << endl;
        cout << "Enter your role: ";
        cin >> role;

        if (role == "Admin")
		{
            cout << "Full Access";
        }
        else if (role == "Guest")
		{
            cout << "Limited Access";
        }
        else
		{
            cout << "No Access";
        }

    }
	else
	{
        cout << "Authentication Failed. Access Denied.";
    }

    return 0;
}

