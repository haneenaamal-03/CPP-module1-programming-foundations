#include <iostream>
using namespace std;

int main()
{
    double marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks" << endl;
    }
    else if (marks >= 40)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}