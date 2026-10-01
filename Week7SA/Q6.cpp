#include <iostream>
using namespace std;

class Flight
{
    int flight_no;
    string source;
    string destination;
    float fare;

public:
    void setData(int no, string src, string dest, float f)
    {
        this->flight_no = no;
        this->source = src;
        this->destination = dest;
        this->fare = f;
    }

    void display()
    {
        cout << "\nFlight Information" << endl;
        cout << "Flight Number : " << this->flight_no << endl;
        cout << "Source        : " << this->source << endl;
        cout << "Destination   : " << this->destination << endl;
        cout << "Fare          : " << this->fare << endl;
    }
};

int main()
{
    Flight f;

    f.setData(101, "Delhi", "Mumbai", 5500);

    f.display();

    return 0;
}

