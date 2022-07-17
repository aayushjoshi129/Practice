#include <iostream>
using namespace std;

int Reverse(int arr[], int start, int end)
{
    int s = start;
    int e = end - 1;
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    return 1;
}

void Rotate(int arr[], int size, int r)
{
    int s1 = 0;
    int e1 = size - r;
    int s2 = size - r;
    int e2 = size;
    Reverse(arr, 0, e1);
    Reverse(arr, s2, e2);
    Reverse(arr, 0,size);
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter No. of Rotations : ";
    cin >> r;
    cout << "Before Rotating " << endl;
    display(arr, n);
    if(r<0){
        r = n-r+1;
    }
    r = r % n;
    cout << endl;
    Rotate(arr, n, r);
    cout << "After Rotating " << endl;
    display(arr, n);
    cout << endl;
}