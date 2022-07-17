#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, base;
    cout << "Enter no : ";
    cin >> n;
    // int number = n;
    cout << "Enter the base of number : ";
    cin >> base;
    int number = 0;
    int p = 1;
    while (n)
    {
        number += n % 10 * p;
        n/=10;
        p = p * base;
    }
    cout<<number<<endl;
}
