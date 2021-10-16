#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    char name[20];
    float cost;
    ofstream fout;
    fout.open("data");
    fout<<"Keyboard\n";
    fout<<"300\n";
    fout.close();
    ifstream fin;
    fin.open("data");
    fin>>name;
    fin>>cost;
    cout<<"\n Item name : "<<name;
    cout<<"\n Item Cost : "<<cost;
    fin.close();
    return 0;
}
