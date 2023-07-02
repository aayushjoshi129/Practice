#include <iostream>
#include <vector>
using namespace std;

vector<int> sumArray(vector<int> arr1, vector<int> arr2)
{
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;

    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
        // first case
        while (i >= 0)
        {
            int sum = arr1[i] + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
            i--;
        }
        // second case
        while (j >= 0)
        {
            int sum = arr2[j] + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
            j--;
        }

        while(carry!=0){
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }

    // reverse() vector
    int s = 0;
    int e = ans.size() - 1;
    while (s < e)
    {
        swap(ans[s], ans[e]);
        s++;
        e--;
    }
    return ans;
}

void print(vector<int> v)
{
    cout << "Sum Array is : ";
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

    vector<int> ans = sumArray(arr1, arr2);
    print(ans);
}