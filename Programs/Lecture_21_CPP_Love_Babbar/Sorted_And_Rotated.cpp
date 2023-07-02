#include <iostream>
#include <vector>
using namespace std;

int isSortedRotated(vector<int> arr)
{
    int count = 0;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[n - 1] > arr[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{
    int n, a;
    vector<int> arr;
    cout << "Enter No. of Elements in Array: ";
    cin >> n;

    // Taking Input in a Vector
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in Array: ";
        cin >> a;
        arr.push_back(a);
    }
    cout << endl;

    int ans = isSortedRotated(arr);

    if (ans)
    {
        cout << "Array is Sorted and Rotated.";
    }
    else
    {
        cout << "Array is not Sorted or Rotated.";
    }
}