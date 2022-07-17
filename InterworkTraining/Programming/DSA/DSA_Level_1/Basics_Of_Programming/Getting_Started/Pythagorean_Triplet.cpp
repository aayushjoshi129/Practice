#include <iostream>
using namespace std;
int main()
{
    int a, b, c, big, mid, small;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    if (a > b && a > c)
    {
        big = a;
        mid = b;
        small = c;
    }
    else if (b > c)
    {
        big = b;
        mid = a;
        small = c;
    }
    else
    {
        big = c;
        mid = a;
        small = b;
    }

if (big * big == mid * mid + small * small)
{
    cout <<"This is a Triplet"<< endl;
}
else{
    cout<<"This is not a Triplets"<<endl;
}
}