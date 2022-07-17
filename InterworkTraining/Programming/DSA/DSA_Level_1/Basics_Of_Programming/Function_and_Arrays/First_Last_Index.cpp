#include <iostream>
#include <math.h>
using namespace std;

void indexes(int arr[], int size, int key)
{
    int fi = -1, li = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            fi = i;
            break;
        }
    }
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == key)
        {
            li = i;
            break;
        }
    }
    cout << fi << endl;
    cout << li << endl;
}

int main()
{
    int n, key, arr[100];
    cin >> n;
    int output[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key : ";
    cin >> key;

    indexes(arr, n, key);
}