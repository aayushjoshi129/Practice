#include <iostream>
using namespace std;

	int isDivisible(string s){
	    //complete the function here
	     int i,odd=0,eve=0,n=s.size();
	    for(i=0;i<n;i++){
	        if(s[i]=='1'){
	            if(i%2)odd++;
	            else eve++;
	        }
	    }
	    return (odd-eve)%3==0;
	}

int main()
{
    string s;
    cout << "Enter S:";
    cin >> s;
    int res=isDivisible(s);
    if(res)
	cout << "The Number is divisible by 3";
    else
    cout << "The Number is not divisible by 3";
}