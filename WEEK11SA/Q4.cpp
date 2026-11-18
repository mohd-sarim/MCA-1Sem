
#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter an integer number: ";
    cin >> n;

    cout << "\n----- MENU -----" << endl;
    cout << "1. Binary" << endl;
    cout << "2. Octal" << endl;
    cout << "3. Hexadecimal" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            int num = n, binary[32], i = 0;

            if(num == 0)
                cout << "Binary = 0";
            else
            {
                while(num > 0)
                {
                    binary[i] = num % 2;
                    num = num / 2;
                    i++;
                }

                cout << "Binary = ";
                for(int j = i - 1; j >= 0; j--)
                    cout << binary[j];
            }
            break;
        }

        case 2:
            cout << "Octal = " << oct << n;
            break;

        case 3:
            cout << "Hexadecimal = " << hex << n;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

