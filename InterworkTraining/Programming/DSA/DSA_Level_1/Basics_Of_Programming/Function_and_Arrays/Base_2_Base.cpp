#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, base1, base2;
    cout << "Enter no : ";
    cin >> n;
    int num = n;
    cout << "Enter the base of number : ";
    cin >> base1;
    cout << "Enter the base to convert : ";
    cin >> base2;
    int dec = 0;
    int number = 0;
    int p1 = 1;
    while (num)
    {
        dec += num % 10 * p1;
        num/=10;
        p1 = p1 * base1;
    }
    cout<<dec<<endl;
    int p2=1;
    while (dec)
    {
        number += dec % base2 * p2;
        dec/=base2;
        p2 = p2 * 10;
    }
    cout<<"In base "<<base2<<" value of given number is "<<number<<endl;
}
