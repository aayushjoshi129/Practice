#include <iostream>
using namespace std;

void allIndices(int arr[], int idx, int d, int n)
{
    if (idx == n)
    {
        return;
    }
    if (arr[idx] == d)
    {
        cout << idx << " , ";
        allIndices(arr, idx + 1, d, n);
    }
    else
    {
        allIndices(arr, idx + 1, d, n);
    }
}

int main()
{
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;
    int d;
    int arr[n];
    cout << "Enter Elements in Array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter Element to Find Occurences in Array : ";
    cin >> d;

    cout << d << " is present at Index ";
    allIndices(arr, 0, d, n);
    cout << "\n";
}