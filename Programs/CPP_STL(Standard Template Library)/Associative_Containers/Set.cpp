// SET - It stores only the unique elements, not duplicates.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Initializing a SET
    set<int> s;

    // Inserting values in a set
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(2);
    s.insert(3);

    // Traversing a Set
    cout<<"Traversing -> ";
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erasing an Element
    s.erase(s.begin());
    cout<<"After Erasing -> ";
        for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    //Check if Element is present or not
    cout<<"Element 5 is present or not -> "<<s.count(5)<<endl;

        //Find returns the iterator 
        set<int>:: iterator itr = s.find(5);
    cout<<"Element 5 is present at Index -> "<<*itr<<endl;
}