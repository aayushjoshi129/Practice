#include <iostream>
using namespace std;

void printDecreasing(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        printDecreasing(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout<<"In Descending "<<endl;
    printDecreasing(n);
}