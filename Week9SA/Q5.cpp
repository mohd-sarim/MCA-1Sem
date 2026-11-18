
#include <iostream>
using namespace std;

void display(int a[], int n, int i)
{
    if (i == n)
        return;

    cout << a[i] << " ";

    display(a, n, i + 1);
}

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Array elements are:\n";

    display(a, n, 0);

    return 0;
}

