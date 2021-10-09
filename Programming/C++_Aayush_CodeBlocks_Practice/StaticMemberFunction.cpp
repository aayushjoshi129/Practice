#include<iostream>
using namespace std;
class test
{
    int no;
    static int count;
public:
    void setno(void);
    void dispno(void);
    static void dispcount(void);
};
void test::setno(void)
{
    no=++count;
}
void test::dispno(void)
{
    cout<<"\nobject no= "<<no;
}
void test::dispcount(void)
{
    cout<<"\ncount = "<<count;
}
int test::count;
int main()
{
    test t1,t2,t3;
    t1.setno();
    t2.setno();
    test::dispcount();
    t3.setno();
    test::dispcount();
    t1.dispno();
    t2.dispno();
    t3.dispno();
    return 0;
}

