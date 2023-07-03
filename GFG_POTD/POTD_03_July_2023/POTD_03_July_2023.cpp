#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maximumIndex(vector<int> arr, int n)
{
    vector<int> maxi;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (arr[i] <= arr[j] && j - i >= 0)
            {
                maxi.push_back(j - i);
                break;
            }
            else
            {
                maxi.push_back(0);
            }
        }
    }
    int max = *max_element(maxi.begin(), maxi.end());
    return max;
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