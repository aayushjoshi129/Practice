#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {
        if (k <= 1)
        {
            return 0;
        }

        int count = 0;
        int left = 0;
        long long product = 1;

        for (int right = 0; right < n; right++)
        {
            product *= a[right];

            while (product >= k)
            {
                product /= a[left];
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }
};

int main()
{
    // int t;
    // cin >> t;
    // while (t--) {
    int n, i;
    long long int k;
    cout << "Enter No. of Elements in Array:";
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in Array:";
        cin >> arr[i];
    }
    cout << "Enter the value of k:";
    cin >> k;
    Solution obj;
    cout << "Count the subarrays having product less than " << k + " is " << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    // }
    return 0;
}