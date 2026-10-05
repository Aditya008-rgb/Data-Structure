#include <iostream>
using namespace std;

int main() 
{
    int rollNo[5];
    int searchRoll;
    bool found = false;

    cout << "Enter roll numbers of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cin >> rollNo[i];
    }

    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    for (int i = 0; i < 5; i++) 
    {
        if (rollNo[i] == searchRoll) 
        {
            found = true;
            cout << "Student found at position " << i + 1 << endl;
            cout << "Student count: " << i + 1 << endl;
            break;
        }
    }

    if (!found) 
    {
        cout << "Student not found" << endl;
    }

    return 0;
}

