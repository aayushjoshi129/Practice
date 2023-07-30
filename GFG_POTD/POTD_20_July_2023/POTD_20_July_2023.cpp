#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        // Your code here
        unordered_map<char, int> mp;
        for (auto i : S)
        {
            mp[i]++;
        }
        for (auto i : S)
        {
            if (mp[i] == 1)
            {
                return i;
            }
        }
        return '$';
    }
};

int main()
{
    string S;
    cin >> S;
    Solution obj;
    char ans = obj.nonrepeatingCharacter(S);

    if (ans != '$')
        cout << ans;
    else
        cout << "-1";

    cout << endl;
}