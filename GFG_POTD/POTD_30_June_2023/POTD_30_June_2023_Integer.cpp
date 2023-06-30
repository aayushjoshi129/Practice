#include <iostream>
using namespace std;

long long int  divBy3(long long int n)
{
    // if input is string
    // int num = 0;  
    // for(int i = 0; i < s.length(); i++){
    //     num = num * 10 + s[i] - '0';
    // }

    long long int  dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    long long int  base = 1;

    long long int  temp = n;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int main()
{
    long long int  n;
    cout << "Enter N:";
    cin >> n;
    long long int  res=divBy3(n);
    if ( res% 3 == 0)
        cout << "The Number "<< res<< " is divisible by 3";
    else
    cout << "The Number "<< res<< " is not divisible by 3";
}