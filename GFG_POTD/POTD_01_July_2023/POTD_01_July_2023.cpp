#include <iostream>
using namespace std;

string setBits(int n)
{
    int rem;
    string ans;
    if (n <= 0)
    {
        return "0";
    }
    else
    {
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                ans = "0" + ans;
                n /= 2;
            }
            else
            {
                ans = "1" + ans;
                n /= 2;
            }
        }
        return ans;
    }
}

int main()
{
    int n;
    cout << "Enter N:";
    cin >> n;

    cout << "The Number of Set Bits in " << n << " is : " << setBits(n);
}