#include <iostream>
using namespace std;

int setBits(int n)
{
    int count=0;
    string ans;
    if (n <= 0)
    {
        return 0;
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
                count++;
                n /= 2;
            }
        }
        return count;
    }
}

int main()
{
    int n;
    cout << "Enter N:";
    cin >> n;

    cout << "The Number of Set Bits in " << n << " is : " << setBits(n);
}