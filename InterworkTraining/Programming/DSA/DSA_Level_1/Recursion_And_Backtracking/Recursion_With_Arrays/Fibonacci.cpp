#include <iostream>
using namespace std;
int a = 0, b = 1, f = 0;

// Returns the series 
void fibonacci(int n)
{
    if (n == 0)
    {
        return;
    }
    else if (n > 0)
    {
        {
            fibonacci(n - 1);

            if (n == 1)
            {
                cout << a << " ";
            }
            else if (n == 2)
            {
                cout << b << " ";
            }
            else
            {
                f = a + b;
                cout << f << " ";
                a = b;
                b = f;
            }
        }
    }
}


// Return Value at N fib series
// int fibonacci(int n) {
//    if((n==1)||(n==0)) {
//       return(n);
//    }else {
//       return(fibonacci(n-1)+fibonacci(n-2));
//    }
// }

int main()
{
    int n;
    cin >> n;
    // cout<<fibonacci(n)<<endl;
    fibonacci(n);
    cout<<endl;
}