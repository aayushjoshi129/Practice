#include <iostream>
using namespace std;

void Inverse(int arr[], int size, int output[])
{
    for (int i = 0; i < size; i++)
    {
        int val = arr[i];
        output[val] = i;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, r, arr[100];
    cin >> n;
    int output[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Inverse " << endl;
    display(arr, n);

    cout << endl;
    Inverse(arr, n, output);
    cout << "After Inverse " << endl;
    display(output, n);
    cout << endl;
}