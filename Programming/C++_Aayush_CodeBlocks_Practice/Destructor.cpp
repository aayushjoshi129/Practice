#include<iostream>
using namespace std;
class test
{
    static int count;
public:
    test()
    {
        count++;
        cout<<count<<"\nobject created \n";
    }
    ~test()
    {
        cout<<count<<"\nobject destroyed \n";
        count--;
    }
};
int test::count;
int main()
{
    cout<<"\nmain block ";
    test t1;
    {
        cout<<"\nblock 1";
        test t2,t3;
        cout<<"\nexit from block 1";
    }
    cout<<"\nexit from main";
    return 0;
}
