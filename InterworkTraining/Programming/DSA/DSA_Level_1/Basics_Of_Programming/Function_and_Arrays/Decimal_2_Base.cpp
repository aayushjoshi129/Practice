#include <iostream>
using namespace std;
int main()
{
    int n, base;
    cout << "Enter no : ";
    cin >> n;
    int number = n;
    cout << "Enter the base to convert : ";
    cin >> base;
    int num = 0;
    // int i = 0;
    int p=1;
    while (number)
    {
        int rem = number % base;
        // num = num + (rem * pow(10, i));
        // i += 1;
        number /= base;
        num += rem * p;
        p = p * 10;                 // Calculating power without pow function
    }

    cout << num << endl;
}