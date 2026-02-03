#include <iostream>
using namespace std;

char getGrade(int marks)
{
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main()
{
    int m1, m2, m3;
    cout << "Enter marks of 3 subjects (out of 100):\n";
    cin >> m1 >> m2 >> m3;

    char g1 = getGrade(m1);
    char g2 = getGrade(m2);
    char g3 = getGrade(m3);

    if (g1 == 'F' || g2 == 'F' || g3 == 'F')
	{
        cout << "\nSubject Grades:\n";
        cout << "Subject 1: " << g1 << endl;
        cout << "Subject 2: " << g2 << endl;
        cout << "Subject 3: " << g3 << endl;
        cout << "\nResult: Failed\n";
        return 0;
    }

    int total = m1 + m2 + m3;
    float percentage = total / 3.0;

    cout << "\nSubject Grades:\n";
    cout << "Subject 1: " << g1 << endl;
    cout << "Subject 2: " << g2 << endl;
    cout << "Subject 3: " << g3 << endl;

    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percentage << "%\n";

    if (percentage >= 90 && g1 == 'A' && g2 == 'A' && g3 == 'A' && total >= 270)
	{
        cout << "Overall Grade: A\n";
        cout << "Scholarship: Merit Scholarship\n";
    }
    else if (percentage >= 80 && percentage < 90)
	{
        cout << "Overall Grade: B\n";
        if (g1 <= 'B' && g2 <= 'B' && g3 <= 'B' && total >= 240)
            cout << "Scholarship: Regular Scholarship\n";
        else
            cout << "Scholarship: Not Eligible\n";
    }
    else if (percentage >= 70 && percentage < 80)
	{
        cout << "Overall Grade: C\n";
        cout << "Scholarship: Not Eligible\n";
    }
    else if (percentage >= 60 && percentage < 70)
	{
        cout << "Overall Grade: D\n";
        cout << "Scholarship: Not Eligible\n";
    }
    else
	{
        cout << "Overall Grade: F\n";
        cout << "Scholarship: Not Eligible\n";
    }

    return 0;
}

