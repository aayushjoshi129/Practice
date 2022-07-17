#include <iostream>
#include <string>
using namespace std;

string ASCII(string s)
{
    string firstChar = s.substr(0, 1);
    for (int i = 1; i < s.size(); i++)
    {
        char first = s[i-1];
        char second = s[i];
        firstChar = firstChar + to_string(second - first);
        firstChar+=second;
    }
    return firstChar;
}

int main()
{
    string s;
    cout << "Enter String : ";
    cin >> s;

    // Toggling the String

    cout << "Difference to next char is : " << ASCII(s) << endl;
}

//                      Enter String : pepCODinG
//                      Toggled String is : p-11e11p-45C12O-11D37i5n-39G