#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maximumIndex(vector<int> arr, int n)
{
    vector<int> prefix(n), suffix(n);
    prefix[0] = arr[0];
    suffix[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = min(prefix[i - 1], arr[i]);
        suffix[n - i - 1] = max(suffix[n - i], arr[n - i - 1]);
    }

    int i, j, ans;
    i = j = ans = 0;

    while (j < n)
    {
        if (prefix[i] <= suffix[j])
        {
            ans = max(ans, j - i);
            ++j;
        }
        else
        {
            ++i;
        }
    }

    return ans;
}

void display(vector<int> arr)
{
    cout << "The Array is ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n, a;
    vector<int> arr;
    cout << "Enter No. of elements in Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in the Array: ";
        cin >> a;
        arr.push_back(a);
    }
    int ans = maximumIndex(arr, n);
    cout << "The Maximum Index in Array Difference is " << ans << endl;
}