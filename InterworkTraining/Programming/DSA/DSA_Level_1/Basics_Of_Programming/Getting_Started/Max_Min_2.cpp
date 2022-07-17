#include <iostream>
#include <limits.h>
using namespace std;

int secMax(int arr[], int n)
{
    int sec = INT_MIN, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            sec = max;
            max = arr[i];
        }
        else if (arr[i] > sec && arr[i] < max)
        {
            sec = arr[i];
        }
    }
    return sec;
}

int secMin(int arr[], int n)
{
    int sec = INT_MAX, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            sec = min;
            min = arr[i];
        }
        else if (arr[i] < sec && arr[i] > min)
        {
            sec = arr[i];
        }
    }
    return sec;
}

int main()
{
    int n = 6;
    int arr[100];
    cout << "Enter No. of Elements in Array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int secmaxx = secMax(arr, n);
    int secminn = secMin(arr, n);
    cout << "Second Largest Value is " << secmaxx << endl;
    cout << "Second Smallest Value is " << secminn << endl;
}