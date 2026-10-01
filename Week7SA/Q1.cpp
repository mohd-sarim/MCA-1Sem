#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    char *ptr = &str[0];

    for (int i = 0; ptr[i] != '\0'; i++) {
        char ch = ptr[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    cout << "Number of vowels = " << vowels << endl;

    return 0;
}

