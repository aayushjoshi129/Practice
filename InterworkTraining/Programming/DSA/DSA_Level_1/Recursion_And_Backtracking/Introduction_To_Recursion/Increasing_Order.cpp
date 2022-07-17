#include <iostream>
using namespace std;

void printIncreasing(int n)
{
    if (n > 0)
    {
        printIncreasing(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout<<"In Ascending "<<endl;
    printIncreasing(n);
}