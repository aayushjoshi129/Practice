#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    char name[20];
    float cost;
    ofstream outf("data");
    cout<<"\nEnter item name : ";
    cin>>name;
    cout<<"\nEnter Cost : ";
    cin>>cost;
    outf<<name<<"\n";
    outf<<cost<<"\n";
    outf.close();
    ifstream inf("data");
    inf>>name;
    inf>>cost;
    cout<<"\n Item name : "<<name;
    cout<<"\n Item Cost : "<<cost;
    inf.close();
    return 0;
}
