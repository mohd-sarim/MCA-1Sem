
#include <iostream>
using namespace std;

class Number
{
    int value1, value2;

public:
    // Constructor
    Number(int a, int b)
    {
        value1 = a;
        value2 = b;
    }

    // Overloading + operator
    Number operator+(Number obj)
    {
        return Number(value1 + obj.value1,
                      value2 + obj.value2);
    }

    // Overloading - operator
    Number operator-(Number obj)
    {
        return Number(value1 - obj.value1,
                      value2 - obj.value2);
    }

    // Overloading * operator
    Number operator*(Number obj)
    {
        return Number(value1 * obj.value1,
                      value2 * obj.value2);
    }

    // Overloading / operator
    Number operator/(Number obj)
    {
        return Number(value1 / obj.value1,
                      value2 / obj.value2);
    }

    // Display function
    void display()
    {
        cout << value1 << " " << value2 << endl;
    }
};

int main()
{
    Number n1(20, 40), n2(10, 5);

    Number n3 = n1 + n2;
    Number n4 = n1 - n2;
    Number n5 = n1 * n2;
    Number n6 = n1 / n2;

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

