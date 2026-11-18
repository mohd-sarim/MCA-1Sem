
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Insert at beginning
    void insertBeginning(int value)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertEnd(int value)
    {
        Node* newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Insert at given position (1-based)
    void insertPosition(int value, int pos)
    {
        if (pos < 1)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        if (pos == 1)
        {
            insertBeginning(value);
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from beginning
    void deleteBeginning()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from end
    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    // Delete from given position (1-based)
    void deletePosition(int pos)
    {
        if (head == NULL || pos < 1)
        {
            cout << "Invalid position or empty list!" << endl;
            return;
        }

        if (pos == 1)
        {
            deleteBeginning();
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    // Display linked list
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;

        cout << "Linked List: ";

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Destructor to free memory
    ~LinkedList()
    {
        while (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    LinkedList list;
    int choice, value, pos;

    do
    {
        cout << "\n----- SINGLY LINKED LIST -----" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Given Position" << endl;
        cout << "4. Delete from Beginning" << endl;
        cout << "5. Delete from End" << endl;
        cout << "6. Delete from Given Position" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertBeginning(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertEnd(value);
            break;

        case 3:
            cout << "Enter value and position: ";
            cin >> value >> pos;
            list.insertPosition(value, pos);
            break;

        case 4:
            list.deleteBeginning();
            break;

        case 5:
            list.deleteEnd();
            break;

        case 6:
            cout << "Enter position: ";
            cin >> pos;
            list.deletePosition(pos);
            break;

        case 7:
            list.display();
            break;

        case 8:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 8);

    return 0;
}

