#include <iostream>
using namespace std;

void Dec2Inc(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        Dec2Inc(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    Dec2Inc(n);
}