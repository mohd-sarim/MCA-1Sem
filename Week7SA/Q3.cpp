#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double arr[n];
    double *p = arr;

    cout << "Enter " << n << " real numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> *(p + i);
    }

    // Calculate sum
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(p + i);
    }

    // Calculate mean
    double mean = sum / n;

    // Calculate standard deviation
    double variance = 0;
    for (int i = 0; i < n; i++)
    {
        variance += pow(*(p + i) - mean, 2);
    }

    double standard_deviation = sqrt(variance / n);

    cout << "\nSum = " << sum;
    cout << "\nMean = " << mean;
    cout << "\nStandard Deviation = " << standard_deviation;

    return 0;
}

