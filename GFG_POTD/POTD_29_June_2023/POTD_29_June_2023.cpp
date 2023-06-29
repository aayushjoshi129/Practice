#include <iostream>
using namespace std;

bool isHappy(int n)
{
    while (n >= 0 && n <= 9)
    {
        if (n == 7 || n == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int tmp = n;
    int sum = 0;
    while (tmp)
    {
        int rem = tmp % 10;
        sum += (rem * rem);
        tmp /= 10;
    }
    return isHappy(sum);
}

int nextHappy(int N)
{

    // code here
    while (++N)
    {
        if (isHappy(N))
            return N;
    }
}

    int main()
    {
        int n;
        cout << "Enter N:";
        cin >> n;
        int res=0;

        cout<<"The Happy Number is : "<<nextHappy(n);
    }