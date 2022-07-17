#include <iostream>
using namespace std;

int subsequences(string str , string output []){
    if(str.length()==0){
        output[0]="";
        return 1;
    }
    int smallerOutputSize = subsequences(str.substr(1),output);
    for(int i=0;i<smallerOutputSize;i++){
        output[i+smallerOutputSize] = str[0] + output[i];
    }
    return 2*smallerOutputSize;
}

int main()
{
    string s;
    cin >> s;
    string output[1000];
   int outputSize = subsequences(s,output);
    for(int i=0;i<outputSize;i++){
        cout<<output[i]<<" , ";
    }
    cout<<endl;
}