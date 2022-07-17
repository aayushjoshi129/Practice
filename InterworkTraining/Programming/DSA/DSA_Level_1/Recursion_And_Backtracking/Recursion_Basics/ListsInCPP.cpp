#include<iostream>
#include<list>
using namespace std;

// LISTS
void disp(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin() ; it!=lst.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;    
}


int main(){
    list<int> l1;   // List is a kind of Dynamic Array
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    disp(l1);
    l1.push_front(41);
    disp(l1);
    l1.push_back(51);
    disp(l1);
    l1.pop_back();
    disp(l1);
    l1.pop_front();
    disp(l1);
    l1.remove(30);
    disp(l1);
    l1.remove(35);
    disp(l1);
    


    list<int> l2;
    l2.push_back(70);
    l2.push_back(30);
    l2.push_back(40);
    l2.push_back(90);
    l2.push_back(10);
    disp(l2);
    l2.sort();
    disp(l2);

    list<int> l3;
    l3.merge(l1);
    disp(l3);
    l3.merge(l2);
    disp(l3);
    l3.reverse();
    disp(l3);

    list<int> l4;
    l4.push_back(25);
    l4.push_back(35);
    l4.push_back(45);
    l4.push_back(95);
    disp(l4);
    l4.swap(l1);
    disp(l1);
    disp(l4);
    
    return 0;
}