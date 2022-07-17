#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s1 = "Hello";
    string s2 = "World";
    string s3;
    string s4;
    string s5 = "abcdefghijklmnopqrstuvwxyz";
    // cout<<"Enter String : ";
    // cin>>s3;
    // cout<<"Enter a Line : ";
    // getline(cin,s4);

    // cout<<s1+s2<<endl;
    // cout<<s1.append(s2)<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s1[2]<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;
    cout<<s5<<endl;
    cout<<s5.erase(2,5)<<endl;
    cout<<s5<<endl;
    s5.clear();
    cout<<s5.empty()<<endl;
    cout<<s5<<endl;
    cout<<s1.compare(s2)<<endl;
    cout<<s1.find("llo")<<endl;
    s1.insert(3,"no");
    cout<<s1<<endl;

    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<endl;
    }

    string str1 = s2.substr(1,2);
    cout<<str1<<endl;
    string str2 = "786";
    cout<<str2<<" "<<stoi(str2)+2<<endl;

    int x =780;
    string xs = to_string(x);
    cout<<xs + " 2"<<endl;

    string str3 = "xnurfguwsfyqal";
    cout<<str3<<endl;
    sort(str3.begin(),str3.end());
    cout<<str3<<endl;

}