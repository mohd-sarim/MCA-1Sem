
#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    // Constructor for type conversion
    Number(int x)
    {
        value = x;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    int a = 50;

    // Basic type to user-defined type
    Number n = Number(a);

    n.display();

    return 0;
}

