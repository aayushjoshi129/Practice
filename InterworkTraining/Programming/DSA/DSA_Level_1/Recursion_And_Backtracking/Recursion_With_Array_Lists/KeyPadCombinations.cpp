#include <iostream>
using namespace std;

string getPossibleCharsForKeypad(char c)
{
    if (c == '2')
    {
        return "abc";
    }
    if (c == '3')
    {
        return "def";
    }
    if (c == '4')
    {
        return "ghi";
    }
    if (c == '5')
    {
        return "jkl";
    }
    if (c == '6')
    {
        return "mno";
    }
    if (c == '7')
    {
        return "pqrs";
    }
    if (c == '8')
    {
        return "tuv";
    }
    if (c == '9')
    {
        return "wxyz";
    }
    return "";
}

int getKeyPadCombinations(string str, string output[])
{
    if (str.length() == 0)
    {
        output[0] = "";
        return 1;
    }
    int smallerOutputSize = getKeyPadCombinations(str.substr(1), output);
    string firstDigitPossibleChars = getPossibleCharsForKeypad(str[0]);
    string temp[1000];
    int k = 0;
    for (int i = 0; i < smallerOutputSize; i++)
    {
        for (int j = 0; j < firstDigitPossibleChars.length(); j++)
        {
            temp[k] = firstDigitPossibleChars[j] + output[i];
            k++;
        }
    }

    for (int i = 0; i < k; k++)
    {
        output[i] = temp[i];
    }

    return smallerOutputSize * firstDigitPossibleChars.length();
}

int main()
{
    string output[1000];
    // string str;
    // cin >> str;
    // int size = getKeyPadCombinations("23", output);
    int outputSize = getKeyPadCombinations("23",output);
    for (int i = 0; i < outputSize; i++)
    {
        cout << output[i] << endl;
    }
    cout << endl;
}