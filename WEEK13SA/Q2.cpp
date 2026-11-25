
#include <iostream>
using namespace std;

class Number1
{
    int value1, value2;

public:
    // Constructor
    Number1(int a, int b)
    {
        value1 = a;
        value2 = b;
    }

    // Friend function declarations
    friend Number1 operator+(Number1, Number1);
    friend Number1 operator-(Number1, Number1);
    friend Number1 operator*(Number1, Number1);
    friend Number1 operator/(Number1, Number1);

    // Display function
    void display()
    {
        cout << value1 << " " << value2 << endl;
    }
};

// Overloading + operator
Number1 operator+(Number1 n1, Number1 n2)
{
    return Number1(n1.value1 + n2.value1,
                   n1.value2 + n2.value2);
}

// Overloading - operator
Number1 operator-(Number1 n1, Number1 n2)
{
    return Number1(n1.value1 - n2.value1,
                   n1.value2 - n2.value2);
}

// Overloading * operator
Number1 operator*(Number1 n1, Number1 n2)
{
    return Number1(n1.value1 * n2.value1,
                   n1.value2 * n2.value2);
}

// Overloading / operator
Number1 operator/(Number1 n1, Number1 n2)
{
    return Number1(n1.value1 / n2.value1,
                   n1.value2 / n2.value2);
}

int main()
{
    Number1 n1(20, 40), n2(10, 5);

    Number1 n3 = n1 + n2;
    Number1 n4 = n1 - n2;
    Number1 n5 = n1 * n2;
    Number1 n6 = n1 / n2;

    cout << "Addition: ";
    n3.display();

    cout << "Subtraction: ";
    n4.display();

    cout << "Multiplication: ";
    n5.display();

    cout << "Division: ";
    n6.display();

    return 0;
}

