
#include <iostream>
using namespace std;

class Number3
{
    int value;

public:
    // Constructor
    Number3(int a)
    {
        value = a;
    }

    // Overloading unary minus
    void operator-()
    {
        value = -value;
    }

    // Overloading increment
    void operator++()
    {
        ++value;
    }

    // Overloading decrement
    void operator--()
    {
        --value;
    }

    // Display function
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number3 n(10);

    cout << "Original number: ";
    n.display();

    -n;
    cout << "After unary minus: ";
    n.display();

    ++n;
    cout << "After increment: ";
    n.display();

    --n;
    cout << "After decrement: ";
    n.display();

    return 0;
}

