#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string ss)
{
    int r = 0, l = ss.length() - 1;
    while (r <= l)
    {
        if (ss[r] != ss[l])
        {
            return false;
        }
        else
        {
            r++;
            l--;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter String : ";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 1; i+j <= s.length(); j++)
        {
            string ss = s.substr(i, j);
            if (isPalindrome(ss)==true)
            {
                cout << ss << endl;
            }
        }
    }
}