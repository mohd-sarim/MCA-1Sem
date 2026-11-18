
#include <iostream>
using namespace std;

// Call by Value
void swap_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping (Call by Value):\n";
    cout << "a = " << a << "\nb = " << b << endl;
}

// Call by Reference
void swap_reference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Call by Value";
    cout << "\n2. Call by Reference";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            swap_value(a, b);
            cout << "Original values:\n";
            cout << "a = " << a << "\nb = " << b;
            break;

        case 2:
            swap_reference(a, b);
            cout << "After swapping (Call by Reference):\n";
            cout << "a = " << a << "\nb = " << b;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

