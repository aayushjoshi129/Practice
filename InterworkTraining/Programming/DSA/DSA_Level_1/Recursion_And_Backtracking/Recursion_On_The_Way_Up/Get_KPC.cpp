#include <iostream>
using namespace std;

void Printkpc(string ques, string ans, string codes[])
{
    // while(start_index<ques.length()){
    // string s = ques.substr(start_index,end_index);
    // return Printkpc(ques,start_index+1,end_index+1);
    // }

    if (ques.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = ques.at(0);
    string roq = ques.substr(1);

    string codeForCh = codes[ch-'0'];
    for (int i = 0; i < codeForCh.length(); i++)
    {
        char cho = codeForCh.at(i);
        Printkpc(roq, ans + cho, codes);
    }
}

int main()
{
    string n;
    cout << "Enter KeyPad Combination : ";
    cin >> n;
    string codes[10] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    Printkpc(n, "", codes);
    return 0;
}