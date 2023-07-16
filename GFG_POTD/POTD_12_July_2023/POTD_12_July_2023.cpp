#include <iostream>
using namespace std;

long long power(int N, int R)
{
    // Your code here
    int mod = 1000000007;
    if (R == 0)
        return 1;
    if (R == 1)
        return N % mod;
    long long ans = (power(N, R / 2) % mod);
    ans = (ans * ans) % mod;
    if (R % 2)
        ans = (ans * N) % mod;
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter Number:";
    cin >> n;
    cout << "Enter Reversed Number:";
    cin >> r;

    cout << "The reverse of " << n << " is " << r << " and after raising power of " << n << " by " << r << " we get " << power(n, r) << " as remainder after dividing by 1000000007.";
    return 0;
}