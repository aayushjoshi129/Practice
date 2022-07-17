#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, r;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "Enter the times you want the number to rotate : ";
    cin >> r;
    string num = to_string(n) + to_string(n);
    int num2 = stoi(num);
    int num2cp = n;
    int len = 0;
    while (num2cp)
    {
        len += 1;
        num2cp = num2cp / 10;
    }
        r = r % len;
    if (r < 0)
    {
        r = len + r ;
    }
    int mod = pow(10, len + r);

    int number = num2 % mod;
    int rotated = number / pow(10, r);

    cout << rotated << endl;
}