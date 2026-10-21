
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, oldStr, newStr;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the string to find: ";
    getline(cin, oldStr);

    cout << "Enter the replacement string: ";
    getline(cin, newStr);

    size_t pos = sentence.find(oldStr);

    if (pos != string::npos) {
        sentence.replace(pos, oldStr.length(), newStr);
        cout << "Updated sentence: " << sentence;
    } else {
        cout << "String not found.";
    }

    return 0;
}

