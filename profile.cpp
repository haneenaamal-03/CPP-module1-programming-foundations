#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    double marks;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "\n--- Profile ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}