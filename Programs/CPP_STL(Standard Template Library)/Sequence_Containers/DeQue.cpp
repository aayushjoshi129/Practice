#include <iostream>
#include <deque>
using namespace std;

int main()
{

    // Initializing a Deque
    deque<int> d;

    // To Insert an Element in DEQue from back & Front, we can use push_back() && push_front()
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // To Delete an Element in DEQue from back & Front, we can use pop_back() && pop_front()
    d.pop_back();
    cout << "DeQue After pop_back() : ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();
    cout << "DeQue After pop_front() : ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // accessing elements with indexes
    cout << "DeQue Element at 1 Index: " << d.at(1);
    cout << endl;

    // First Element in DeQue
    cout << "First Element in DeQue A is -> " << d.front() << endl;

    // Last Element in DeQue
    cout << "Last Element in DeQue A is -> " << d.back() << endl;

    // Check DeQue is Empty or Not
    cout << "DeQue is Empty or Not -> " << d.empty() << endl;

    cout << "Elements in Vector Before erase() is -> " << d.size() << endl;
    // Erase is used to clear the DeQue, here we need to give starting position and ending to erase
    d.erase(d.begin(), d.begin() + 1);
    cout << "Elements in Vector After erase() is -> " << d.size() << endl;

    cout << "Elements in Vector Before clear() is -> " << d.size() << endl;
    // Erase is used to clear the DeQue, here we need to give starting position and ending to erase
    d.clear();
    cout << "Elements in Vector After clear() is -> " << d.size() << endl;
}