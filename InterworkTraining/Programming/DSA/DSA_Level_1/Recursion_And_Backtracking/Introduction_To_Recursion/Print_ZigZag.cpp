#include <iostream>
using namespace std;

void pzz(int n)
{
    if(n==0){
        return;
    }
    cout << n;  // PreOrder
    
    pzz(n - 1); // Left Recursion Call

    cout << n;  // InOrder
    
    pzz(n - 1); // Right Recursion Call
    
    cout << n;  // PostOrder
}

int main()
{
    int n;
    cin >> n;
    pzz(n);
    cout<<endl;
}


//   Printing Preorder , Inorder , Postorder in Tower of Hanoi Problem (Using Recursion Tree)
