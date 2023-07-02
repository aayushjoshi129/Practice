#include <iostream>
using namespace std;

int main()
{
    char name1[20];
    char name2[20];
    cout << "Enter your name1: ";
    cin >> name1;

    cout << "Enter your name2: ";
    cin >> name2;
    name2[2] = '\0';

    cout << "Your Name1 is: " << name1 << endl;
    cout << "Your Name2 is: " << name2 << endl;
}