
#include <iostream>
using namespace std;

int arraySum(int a[], int n)
{
    if (n == 0)
        return 0;

    return a[n - 1] + arraySum(a, n - 1);
}

int main()
{
    int a[100], n, sum;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sum = arraySum(a, n);

    cout << "Sum of array elements = " << sum;

    return 0;
}

