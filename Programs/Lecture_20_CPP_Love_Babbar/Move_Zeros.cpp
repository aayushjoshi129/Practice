#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(vector<int> arr)
{
    int i = 0;
    int n = arr.size();
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    return arr;
}

void print(vector<int> v)
{
    cout << "New Array is : ";
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

    vector<int> ans = moveZeros(arr);
    print(ans);
}