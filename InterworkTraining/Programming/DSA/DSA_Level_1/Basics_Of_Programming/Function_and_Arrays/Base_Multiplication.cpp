#include <iostream>
using namespace std;

int getProductWithASingleDigit(int b, int n1, int d2)
{
    int res = 0;
    int c = 0;
    int p = 1;
    while (n1 > 0 || c > 0)
    {
        int d1 = n1 % 10;
        n1 = n1 / 10;
        int d = d1 * d2 + c;
        c = d / b;
        d = d % b;
        res += d * p;
        p = p * 10;
    }
    return res;
}

int getSum(int b, int n1, int n2)
{
    int number = 0;
    int p = 1;
    int carry = 0;
    while (n1 > 0 || n2 > 0 || carry)
    {

        number += (n1 % 10 + n2 % 10 + carry) % b * p;
        carry = (n1 % 10 + n2 % 10 + carry) / b;
        n1 /= 10;
        n2 /= 10;
        p = p * 10;
    }
    return number;
}

int getProduct(int b, int n1, int n2)
{

    int res = 0;
    int p = 1;

    while (n2 > 0)
    {
        int d2 = n2 % 10;
        n2 /= 10;
        int sprd = getProductWithASingleDigit(b, n1, d2);
        res = getSum(b, res, sprd * p);
        p *= 10;
    }

    return res;
}

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    // cout << getProduct(b, n1, n2) << endl;
    cout << getProduct(b, n1, n2) << endl;
}