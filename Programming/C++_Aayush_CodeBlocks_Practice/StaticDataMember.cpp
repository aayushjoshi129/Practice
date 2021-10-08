#include<iostream>
using namespace std;
class Test
{
    int no;
    static int count;
public:
    void getval(int);
    void dispcount(void);
};
void Test::getval(int x)
{
    no=x;
    cout<<"\nnumber = "<<no;
    count++;
}
void Test::dispcount(void)
{
    cout<<"\ncounter= "<<count;
}
int Test::count;
int main()
{
    Test t1,t2,t3;
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();
    t1.getval(100);
    t2.getval(200);
    t3.getval(300);
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();
    return 0;
}
