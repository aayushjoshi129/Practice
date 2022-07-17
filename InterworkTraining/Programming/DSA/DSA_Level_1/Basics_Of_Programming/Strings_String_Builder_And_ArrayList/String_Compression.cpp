#include <iostream>
#include <string>
using namespace std;

string Compression1(string s)
{
    string firstChar = s.substr(0, 1);
    for (int i = 1; i < s.length(); i++)
    {
        char currChar = s[i];
        char prev = s[i - 1];

        if (currChar != prev)
        {
            firstChar += currChar;
        }
    }
    return firstChar;
}

string Compression2(string s)
{
    string firstChar = s.substr(0, 1);
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        char currChar = s[i];
        char prev = s[i - 1];
        if (currChar == prev)
        {
            count++;
        }
        else
        {
            if (count > 1)
            {
                firstChar += to_string(count);
                count = 1;
            }

            firstChar += currChar;
        }
    }
    if (count > 1)
    {
        firstChar += to_string(count);
        count = 1;
    }
    return firstChar;
}

int main()
{
    string s;
    cout << "Enter String : ";
    cin >> s;

    // Compressing the String

    cout << "Compressed String is : " << Compression1(s) << endl;
    cout << "Compressed String is : " << Compression2(s) << endl;
}