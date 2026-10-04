#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Enter expression (example: 5 + 3): ";
    cin >> a >> op >> b;

    switch (op)
    {
        case '+':
            cout << "Result: " << a + b << endl;
            break;

        case '-':
            cout << "Result: " << a - b << endl;
            break;

        case '*':
            cout << "Result: " << a * b << endl;
            break;

        case '/':
            if (b == 0)
            {
                cout << "Error: Cannot divide by zero" << endl;
            }
            else
            {
                cout << "Result: " << a / b << endl;
            }
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}