#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    int smallest;
    int largest;
    int sum = 0;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(smallest>int(str[i])){
            smallest = int(str[i]);
        }
        if(largest<int(str[i])){
            largest = int(str[i]);
        }
    }
    sum=sum+largest+smallest;
    cout<<sum<<endl;
}