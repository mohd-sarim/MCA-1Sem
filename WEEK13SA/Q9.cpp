
#include <iostream>
using namespace std;

#define SIZE 5

class Queue
{
    int arr[SIZE];
    int frontIndex, rearIndex;

public:
    Queue()
    {
        frontIndex = -1;
        rearIndex = -1;
    }

    // Enqueue operation
    void enqueue(int x)
    {
        if (rearIndex == SIZE - 1)
        {
            cout << "Queue Overflow!" << endl;
        }
        else
        {
            if (frontIndex == -1)
                frontIndex = 0;

            rearIndex++;
            arr[rearIndex] = x;

            cout << x << " inserted into queue." << endl;
        }
    }

    // Dequeue operation
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
        }
        else
        {
            cout << "Deleted element: "
                 << arr[frontIndex] << endl;

            if (frontIndex == rearIndex)
            {
                frontIndex = rearIndex = -1;
            }
            else
            {
                frontIndex++;
            }
        }
    }

    // Front operation
    void front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            cout << "Front element: "
                 << arr[frontIndex] << endl;
        }
    }

    // Rear operation
    void rear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            cout << "Rear element: "
                 << arr[rearIndex] << endl;
        }
    }

    // Check empty
    bool isEmpty()
    {
        return frontIndex == -1;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.front();
    q.rear();

    q.dequeue();

    q.front();

    if (q.isEmpty())
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    return 0;
}

