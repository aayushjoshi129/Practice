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
    int dec = 0;
    int number = 0;
    int p = 1;
    int carry=0;
    while (n1>0 || n2>0 || carry)
    {
        // dec += num % 10 * p1;
        // num/=10;
        // p1 = p1 * base1;
        number += (n1%10 + n2%10 + carry)%base * p;
        carry =  (n1%10 + n2%10 + carry)/base;
        n1/=10;
        n2/=10;
        p = p * 10;
    }
    cout<<number<<endl;

    // cout<<"In base "<<base2<<" value of given number is "<<number<<endl;
}
