
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, rev;

    cout << "Enter a string: ";
    cin >> s;

    rev = string(s.rbegin(), s.rend());

    if (s == rev)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}

