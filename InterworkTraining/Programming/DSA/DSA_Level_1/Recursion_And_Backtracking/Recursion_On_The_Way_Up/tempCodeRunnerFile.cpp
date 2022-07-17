#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
    // write your code here
    if(str.length()==0){
        cout<<asf<<endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
    char ch = str.at(i);
    string ros1 = str.substr(0,i);
    string ros2 = str.substr(i+1);
    string ros = ros1 + ros2;
    printPermutations(ros,asf+ch);
    }
}

int main(){
    string str;
    cin>>str;
    // string subs = str.substr(0,2);
    cout<<endl;
    printPermutations(str,"");
    
}