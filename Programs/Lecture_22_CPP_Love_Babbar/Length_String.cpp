#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    int len = count;
}


int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "Your Name Length is: " << getLength(name) << endl;
}