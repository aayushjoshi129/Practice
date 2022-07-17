#include<iostream>
using namespace std;

int factorial(int size){
    int val=1;
    for(int i=2;i<=size;i++){
        val*=i;
    }
    return val;
}

int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;
    int n = s.size();
    int f = factorial(n);
    for(int i=0;i<f;i++){
        string str = s;
        int temp=i;
        for(int j=n;j>0;j--){
            int num = temp/j;
            int rem = temp%j;
            cout<<str.at(rem);
            str.erase(rem);
            temp = num;
        }
    }
    cout<<endl;

}