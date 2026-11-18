
#include <iostream>
using namespace std;

class Count
{
private:
    static int created;
    static int destroyed;

public:
    // Constructor
    Count()
    {
        created++;
        cout << "Object Created: " << created << endl;
    }

    // Destructor
    ~Count()
    {
        destroyed++;
        cout << "Object Destroyed: " << destroyed << endl;
    }

    static void display()
    {
        cout << "\nTotal Objects Created: " << created << endl;
        cout << "Total Objects Destroyed: " << destroyed << endl;
    }
};

// Initialize static data members
int Count::created = 0;
int Count::destroyed = 0;

int main()
{
    cout << "Entering Block 1" << endl;
    {
        Count obj1, obj2;

        cout << "\nEntering Block 2" << endl;
        {
            Count obj3, obj4;
        }

        cout << "\nExiting Block 2" << endl;
    }

    cout << "\nExiting Block 1" << endl;

    Count::display();

    return 0;
}

