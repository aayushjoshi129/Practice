#include <iostream>
#include <vector>
using namespace std;

vector<int> rotataArray(vector<int> arr, int k)
{
    int n = arr.size();
    vector<int> arrFinal(n);
    for (int i = 0; i < n; i++)
    {
        arrFinal[(i + k)%n] = arr[i];
    }
    return arrFinal;
}

void print(vector<int> v)
{
    cout << "Rotated Array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n, a, k;
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

    cout << "Enter No. of Steps by which you want to rotate the Array : ";
    cin >> k;

    vector<int> ans = rotataArray(arr, k);
    print(ans);
}