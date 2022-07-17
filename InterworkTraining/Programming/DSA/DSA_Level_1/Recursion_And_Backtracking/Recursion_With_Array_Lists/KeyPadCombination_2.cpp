#include <iostream>
#include <vector>
using namespace std;

void outputKeyPad(vector<vector<string>> &res, string &tempVal, string keypad, int index, vector<string> &options)
{
    if (index >= keypad.size())
    {
        for (int i = 0; i < tempVal.size(); i++)
        {
            cout << tempVal[i] << " ";
        }
        if (tempVal.size() == 0)
        {
            cout << "{}";
        }

        cout << endl;
        // res.push_back(tempVal);
        return;
    }

    char currNum = keypad[index];
    string alpha = options[currNum - '0'];

    for (int i = 0; i < alpha.size(); i++)
    {
        tempVal.push_back(alpha[i]);
        outputKeyPad(res, tempVal, keypad, index + 1, options);
        tempVal.pop_back();
    }
}

vector<vector<string>> display(string keypad, vector<string> options)
{
    vector<vector<string>> res;
    string tempVal;
    // outputKeyPad(res, tempVal, keypad, 0, options);

    if (keypad.size() != 0)
    {
        outputKeyPad(res, tempVal, keypad, 0, options);
    }
    return res;
}

int main()
{
    // vector<string> options = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
 vector<string> options = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

    string digits;
    cout << "Enter String : ";
    cin >> digits;

    display(digits, options);
}