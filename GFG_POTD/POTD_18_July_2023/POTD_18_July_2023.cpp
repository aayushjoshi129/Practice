#include <iostream>
#include <map>
#include <queue>
using namespace std;

class Solution
{
public:
    int LongestRepeatingSubsequence(string str)
    {
        // Code here
        int n = str.size();
        vector<int> curr(n + 1, 0);
        vector<int> prev(n + 1, 0);

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (str[i - 1] == str[j - 1] && i != j)
                {
                    curr[j] = 1 + prev[j - 1];
                }
                else
                {
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            prev = curr;
        }

        return prev[n];
    }
};

int main()
{

    string str;
    cin >> str;
    Solution obj;
    int ans = obj.LongestRepeatingSubsequence(str);
    cout << ans << "\n";
}