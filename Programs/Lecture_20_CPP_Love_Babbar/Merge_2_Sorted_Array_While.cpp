#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArray(vector<int> arr1, vector<int> arr2)
{
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();

    vector<int> arrFinal;

// Checking min element and inserting in arrFinal
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arrFinal.push_back(arr1[i]);
            i++;
        }
        else
        {
            arrFinal.push_back(arr2[j]);
            j++;
        }
    }

    // Copy first array elements
    while (i < n)
    {
        arrFinal.push_back(arr1[i]);
        i++;
    }

    // Copy Second array elements
    while (j < m)
    {
        arrFinal.push_back(arr2[j]);
        j++;
    }

    return arrFinal;
}

void print(vector<int> v)
{
    cout << "Merged Array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n1, n2, a;
    vector<int> arr1, arr2;
    cout << "Enter No. of Elements in First Array: ";
    cin >> n1;

    // Taking Input in a Vector
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter " << i + 1 << " Element in Array: ";
        cin >> a;
        arr1.push_back(a);
    }
    cout << endl;

    cout << "Enter No. of Elements in Second Array: ";
    cin >> n2;

    // Taking Input in a Vector
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter " << i + 1 << " Element in Second Array: ";
        cin >> a;
        arr2.push_back(a);
    }
    cout << endl;

    vector<int> ans = mergeArray(arr1, arr2);
    print(ans);
}