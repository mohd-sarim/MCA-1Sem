
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

public:
    // Default Constructor
    Student()
    {
        rollNo = 101;
        marks = 90;
    }

    // Member Function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;  // Default constructor called automatically

    s.display();

    return 0;
}

