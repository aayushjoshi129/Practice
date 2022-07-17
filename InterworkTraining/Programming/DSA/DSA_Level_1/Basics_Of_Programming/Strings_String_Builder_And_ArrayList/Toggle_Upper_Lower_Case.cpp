#include <iostream>
#include <string>
using namespace std;

string Toggle(string s){
    string tog;
    for(int i=0;i<s.length();i++){

        // lowercase Check
        if(s[i]>=65 && s[i]<=92){
            s[i]+=32;
            tog+=s[i];
        }
        // uppercase Check
        else if(s[i]>=97 && s[i]<=122){
            s[i]-=32;
            tog+=s[i];
        }
    }
    return tog;
}

int main()
{
    string s;
    cout << "Enter String : ";
    cin >> s;

    // Toggling the String

    cout << "Toggled String is : " << Toggle(s) << endl;
}