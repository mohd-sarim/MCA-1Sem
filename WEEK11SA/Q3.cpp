
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, temp, sum = 0;
    int first, second, third, fourth;
    int choice;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    temp = n;

    cout << "\n----- MENU -----" << endl;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Sum of number and its reverse" << endl;
    cout << "3. Sum of alternative digits" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            while(temp > 0)
            {
                rev = rev * 10 + temp % 10;
                temp = temp / 10;
            }
            cout << "Reverse = " << rev;
            break;

        case 2:
            while(temp > 0)
            {
                rev = rev * 10 + temp % 10;
                temp = temp / 10;
            }
            sum = n + rev;
            cout << "Sum = " << sum;
            break;

        case 3:
            first = n / 1000;
            second = (n / 100) % 10;
            third = (n / 10) % 10;
            fourth = n % 10;

            cout << "1st + 3rd digit = "
                 << first + third << endl;

            cout << "2nd + 4th digit = "
                 << second + fourth;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

