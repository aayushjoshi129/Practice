#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> arr, int n, int start)
{
    int s = start + 1;
    int e = arr.size() - 1;

    // Same Using While Loop
    // while (s <= e)
    // {
    //     swap(arr[s], arr[e]);
    //     s++;
    //     e--;
    // }

    for (s; s <= e; s++, e--)
    {
        int tmp = arr[e];
        arr[e] = arr[s];
        arr[s] = tmp;
    }
    return arr;
}

void print(vector<int> v)
{
    cout << "Reversed Array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n, a, start;
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

    cout << "Enter Position to Start Reversing: ";
    cin >> start;

    vector<int> ans = reverseArray(arr, n, start);
    print(ans);
}