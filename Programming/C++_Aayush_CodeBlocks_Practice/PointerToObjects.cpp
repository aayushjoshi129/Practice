#include<iostream>
#include<string>
using namespace std;
class student
{
    int roll;
    char name[10];
    void getdata(int x , char * y)
    {
        roll=x;
        strcpy(name,y);
    }
    void putdata()
    {
        cout<<"roll number is "roll;
        cout<<"name is "name;
    }
};
int main ()
{
    student obj;
    student *p;
    p=&obj;
    p->getdata(101,"Aayush");
    p->putdata();
    return 0;
}
