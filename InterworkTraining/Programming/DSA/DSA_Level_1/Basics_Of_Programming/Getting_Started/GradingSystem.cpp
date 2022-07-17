#include<iostream>
using namespace std;

void gradingSystem(int marks){
if(marks>90){
    cout<<"Excellent"<<endl;
}
else if (80<marks){
    cout<<"good"<<endl;
}
else if (70<marks){
    cout<<"fair"<<endl;
}
else if (60<marks){
    cout<<"meets expectations"<<endl;
}
else if (marks<=60){
    cout<<"below par"<<endl;
}
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    gradingSystem(n);
    return 0;
}