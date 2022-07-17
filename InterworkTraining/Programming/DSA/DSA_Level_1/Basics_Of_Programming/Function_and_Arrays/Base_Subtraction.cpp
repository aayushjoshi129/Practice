#include <iostream>
using namespace std;
int main()
{
    int n1, n2, base;
    cout << "Enter no 1 : ";
    cin >> n1;
    cout << "Enter no 2 : ";
    cin >> n2;
    cout << "Enter the base of number : ";
    cin >> base;
    int d = 0;
    int p = 1;
    int num=0;
    int carry = 0;
    while (n1 > 0)
    {
        int d1 = n1 % 10;
        n1 = n1 / 10;
        int d2 = n2 % 10;
        n2 = n2 / 10;
        d1 = d1 + carry;
        if (d1 >= d2)
        {
            d = d1 - d2;
            carry=0;
        }
        else
        {
            carry = -1;
            d = d1 + base - d2 ;
        }
        num+= d*p;
        p=p*10;
    }
    cout<<num<<endl;

}
