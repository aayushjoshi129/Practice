#include <iostream>
using namespace std;

int Max(int arr[],int idx ,int size)
{
    if (idx == size-1)
    {
        return arr[idx];
    }
    int max2 = Max(arr, idx+1, size);
    if (max2 > arr[idx])
    {
        return max2;
    }
    else
    {
        return arr[idx];
    }
    return 1;
}

int Min(int arr[],int idx ,int size)
{
    if (idx == size-1)
    {
        return arr[idx];
    }
    int min2 = Min(arr,idx+1, size);
    if (arr[idx] > min2)
    {
        return min2;
    }
    else
    {
        return arr[idx];
    }
    return 1;
}

int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
int max = Max(arr,0,n);
int min = Min(arr,0,n);
    int span = max-min;
    cout << span << endl;
}