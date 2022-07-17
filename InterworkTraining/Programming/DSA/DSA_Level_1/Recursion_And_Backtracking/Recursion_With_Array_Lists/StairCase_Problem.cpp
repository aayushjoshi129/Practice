#include <iostream>
using namespace std;

int countWays(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (n == 3)
    {
        return 4;
    }
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int main()
{
    int n;
    cout<<"Enter No. of Stairs : ";
    cin>>n;
    int ways = countWays(n);
    cout<<"The No. of Paths are : "<<ways<<endl;
}