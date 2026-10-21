#include <iostream>
#include <string>
using namespace std;

// Function to insert a substring
void insertSubstring(string &str, string sub, int pos)
{
    str.insert(pos, sub);
    cout << "String after insertion: " << str << endl;
}

// Function to delete n characters
void deleteCharacters(string &str, int pos, int n)
{
    str.erase(pos, n);
    cout << "String after deletion: " << str << endl;
}

int main()
{
    string str, sub;
    int pos, n, choice;

    cout << "Enter the main string: ";
    getline(cin, str);

    cout << "\n1. Insert a substring";
    cout << "\n2. Delete n characters";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter the substring to insert: ";
        cin.ignore();
        getline(cin, sub);

        cout << "Enter the position: ";
        cin >> pos;

        insertSubstring(str, sub, pos);
    }
    else if (choice == 2)
    {
        cout << "Enter the starting position: ";
        cin >> pos;

        cout << "Enter the number of characters to delete: ";
        cin >> n;

        deleteCharacters(str, pos, n);
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
