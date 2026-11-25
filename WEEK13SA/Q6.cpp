
#include <iostream>
using namespace std;

// Base class
class A
{
public:
    int value;

    void getValue()
    {
        cout << "Enter value: ";
        cin >> value;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

// First derived class
class B : virtual public A
{
};

// Second derived class
class C : virtual public A
{
};

// Final derived class
class D : public B, public C
{
};

int main()
{
    D obj;

    obj.getValue();
    obj.display();

    return 0;
}

