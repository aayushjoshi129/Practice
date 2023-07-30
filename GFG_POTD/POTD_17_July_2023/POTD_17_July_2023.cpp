#include <iostream>
#include <map>
#include <queue>
using namespace std;

class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        // Code here
        map<char, int> seen;
        string res;
        queue<char> q;
        string ans;
        for (char ch : A)
        {
            seen[ch]++;
            while (!q.empty() && seen[q.front()] > 1)
                q.pop();
            if (seen[ch] == 1)
                q.push(ch);
            if (q.empty())
                ans.push_back('#');
            else
                ans.push_back(q.front());
        }
        return ans;
    }
};

int main()
{

    string A;
    cin >> A;
    Solution obj;
    string ans = obj.FirstNonRepeating(A);
    cout << ans << "\n";
}