#include<iostream>
using namespace std;
class stu
{
protected:
    int roll;
public:
    void get_roll(int);
    void put_roll();
};
void stu :: get_roll(int x)
{
    roll=x;
}
void stu :: put_roll()
{
    cout<<"\nroll number is "<<roll;
}
class test : public stu
{
protected:
    float m1,m2;
public:
    void get_marks(float,float);
    void put_marks();
};
void test :: get_marks(float x , float y)
{
    m1=x;
    m2=y;
}
void test :: put_marks()
{
    cout<<"\nMarks in Subject 1 is "<<m1;
    cout<<"\nMarks in Subject 2 is "<<m2;
}
class result : public test
{
    float total;
public :
    void display();

};
void result :: display()
{
    total = m1 + m2;
    put_roll();
    put_marks();
    cout<<"\nTotal Marks = "<<total;
}
int main ()
{
    result obj;
    obj.get_roll(101);
    obj.get_marks(53.3,70.1);
    obj.display();
    return 0;
}

