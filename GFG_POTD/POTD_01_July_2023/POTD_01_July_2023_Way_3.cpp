#include <iostream>
#include <bitset>
using namespace std;

int setBits(int n)
{
    // Function to convert Decimal into Binary
    string binary = bitset<8>(n).to_string();
    int res = 0;

    for (int i = 0; i < binary.length(); i++)

        // checking character in string
        if (binary[i] == '1')
            res++;

    return res;
}

int main()
{
    int n;
    cout << "Enter N:";
    cin >> n;

    cout << "The Number of Set Bits in " << n << " is : " << setBits(n);
}