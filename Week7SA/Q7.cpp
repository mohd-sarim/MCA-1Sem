#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        this->value = v;
    }

    Number* getObject()
    {
        return this;
    }

    void display()
    {
        cout << "Value = " << this->value << endl;
    }
};

int main()
{
    Number obj(100);

    Number *ptr;

    ptr = obj.getObject();

    cout << "Object returned using this pointer:" << endl;
    ptr->display();

    return 0;
}

