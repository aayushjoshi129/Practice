#include <iostream>
#include <bitset>
using namespace std;

int setSetBits(int x, int y, int l, int r)
{
         l--;r--;
        for(int i=l;i<=r;i++) {
            if(((1<<i) & y) != 0) {
                x |= (1<<i);
            }
        }
        return x;
}

int main()
{
    int x;
    cout << "Enter x: ";
    cin >> x;

    int y;
    cout << "Enter y: ";
    cin >> y;

    int l;
    cout << "Enter l: ";
    cin >> l;

    int r;
    cout << "Enter r: ";
    cin >> r;

    cout << "The Number After Set Bits is : " << setSetBits(x, y, l, r);
}