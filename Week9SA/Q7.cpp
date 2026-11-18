
#include <iostream>
using namespace std;

int maximum(int a[], int n)
{
    if (n == 1)
        return a[0];

    int max = maximum(a, n - 1);

    if (a[n - 1] > max)
        return a[n - 1];

    return max;
}

int minimum(int a[], int n)
{
    if (n == 1)
        return a[0];

    int min = minimum(a, n - 1);

    if (a[n - 1] < min)
        return a[n - 1];

    return min;
}

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid array size!";
        return 0;
    }

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Maximum element = " << maximum(a, n);
    cout << "\nMinimum element = " << minimum(a, n);

    return 0;
}

