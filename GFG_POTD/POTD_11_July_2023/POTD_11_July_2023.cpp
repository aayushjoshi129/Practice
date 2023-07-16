#include <iostream>
#include <vector>
using namespace std;

int findK(int a[100][100], int n, int m, int k)
{
    // Your code goes here.
    int left = 0, right = m - 1, top = 0, bottom = n - 1;
    int count = 0, ans;
    while (1)
    {
        for (int i = left; i <= right; i++)
        {
            ans = a[top][i];
            count++;
            if (count == k)
                return ans;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans = a[i][right];
            count++;
            if (count == k)
                return ans;
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans = a[bottom][i];
                count++;
                if (count == k)
                    return ans;
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans = a[i][left];
                count++;
                if (count == k)
                    return ans;
            }
            left++;
        }
    }
}

int main()
{

    int n, m, k = 0;

    cout << "Enter No. of Rows in Matrix: ";
    cin >> n;
    cout << "Enter No. of Columns in Matrix: ";
    cin >> m;
    cout << "Enter Position you want to find Element in Spiral in Matrix: ";
    cin >> k;

    int a[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter Elements in Matrix:";
            cin >> a[i][j];
        }
    }

    cout << "The element at Kth Position is " << findK(a, n, m, k) << endl;

    return 0;
}