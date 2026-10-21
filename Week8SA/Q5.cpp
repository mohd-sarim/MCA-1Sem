
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;

    cout << "Enter string S: ";
    getline(cin, S);

    cout << "Enter string T: ";
    getline(cin, T);

    size_t pos = S.find(T);

    if (pos != string::npos)
        cout << "Position: " << pos;
    else
        cout << "Position: -1";

    return 0;
}

