
#include <iostream>
using namespace std;

class Publication
{
protected:
    string title;
    string writer;

public:
    void getPublication()
    {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter writer name: ";
        getline(cin, writer);
    }

    void displayPublication()
    {
        cout << "\nBook Title: " << title << endl;
        cout << "Writer Name: " << writer << endl;
    }
};

class Sales : public Publication
{
    int sales1, sales2, sales3;
    int total;

public:
    void getSales()
    {
        cout << "Enter sales for month 1: ";
        cin >> sales1;

        cout << "Enter sales for month 2: ";
        cin >> sales2;

        cout << "Enter sales for month 3: ";
        cin >> sales3;

        total = sales1 + sales2 + sales3;
    }

    void displaySales()
    {
        cout << "\nSales for Month 1: " << sales1 << endl;
        cout << "Sales for Month 2: " << sales2 << endl;
        cout << "Sales for Month 3: " << sales3 << endl;

        cout << "Total Sales: " << total << endl;
    }
};

int main()
{
    Sales s;

    s.getPublication();
    s.getSales();

    s.displayPublication();
    s.displaySales();

    return 0;
}

