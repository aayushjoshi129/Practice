#include <iostream>
using namespace std;

int power(int x, int n)
{

    if (n == 0)
    {
        return 1;
    }
        return x*power(x,n-1);
}

int main()
{
    int n, x;
    cout << "Enter X : ";
    cin >> x;
    cout << "Enter power of N : ";
    cin >> n;
    cout << power(x, n)<<endl;
}
