// MAP - It is a data structure which stores data in form of key, value pair.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Initializing map
    map<int, string> m;

    // Inserting values in MAP
    m[1] = "Aayush";
    m[2] = "Joshi";
    m[20] = "Ji";


    // Inserting values in MAP
    m.insert({5,"Honey"});

    //Printing the map
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // finding a element is present or not
    cout<<"5 is preset or not -> "<<m.count(5);

    cout<<endl;

    // Erasing an Element
    m.erase(5);
    cout<<"After Erasing :"<<endl;

        //Printing the map after erasing 5
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // Find in MAP
    auto it = m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}