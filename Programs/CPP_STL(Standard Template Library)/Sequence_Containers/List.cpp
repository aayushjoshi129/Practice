// Difference in list and Arrays - Lists can contain only one type of element such as integers or strings, whereas an array may have elements that are different kinds of data such as an integer, string and boolean.

#include <iostream>
#include <list>
using namespace std;

int main()
{

    // Initializing a List
    list<int> l;

    // To Delete an Element in List from back & Front, we can use pop_back() && pop_front()
    l.push_back(2);
    l.push_back(1);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

        // Copying vector
    list<int> last(l);
    cout << "Elements in List Last is ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erase function is used to delete particular element
    l.erase(l.begin());
    cout << "After Erase Function ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

     // To Delete an Element in List from back & Front, we can use pop_back() && pop_front()
    l.pop_back();
    cout << "List After pop_back() : ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.pop_front();
    cout << "List After pop_front() : ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // cannot access elements with indexes
    // cout << "List Element at 1 Index: " << l.at(1);
    // cout << endl;

    // First Element in List
    cout << "First Element in List A is -> " << l.front() << endl;

    // Last Element in List
    cout << "Last Element in List A is -> " << l.back() << endl;

    // Check List is Empty or Not
    cout << "List is Empty or Not -> " << l.empty() << endl;
}