#include <iostream>
using namespace std;

int powerLogarithmic(int x, int n)
{

    if (n == 0)
    {
        return 1;
    }

    int xpnb2 = powerLogarithmic(x, n / 2);
    int xn = xpnb2 * xpnb2;

    if (n % 2 == 1)
    {
        return x * xn;
    }
    return xn;
}

int main()
{
    int n, x;
    cout << "Enter X : ";
    cin >> x;
    cout << "Enter power of N : ";
    cin >> n;
    cout << powerLogarithmic(x, n) << endl;
}