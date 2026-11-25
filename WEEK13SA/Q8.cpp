
#include <iostream>
using namespace std;

#define SIZE 5

class Stack
{
    int arr[SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // Push operation
    void push(int x)
    {
        if (top == SIZE - 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
            cout << x << " pushed into stack." << endl;
        }
    }

    // Pop operation
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << "Popped element: " << arr[top] << endl;
            top--;
        }
    }

    // Peek operation
    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // Check empty
    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();

    s.peek();

    if (s.isEmpty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}

