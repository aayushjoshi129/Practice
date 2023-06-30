// Vector is basically a Dynamic array
// When it's size is going to be full, it increases it's size to double.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Initializing a Vector
    vector<int> v;

    // It takes first param as size and second as default value, else it'll fill 0 as default value
    vector<int> a(10, 2);
    cout << "Elements in Vector A is ";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // Copying vector
    vector<int> last(a);
    cout << "Elements in Vector Last is ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    // Size of Vector
    cout << "Capacity of Vector is -> " << v.capacity() << endl;

    // To Insert an Element, we use push_back function
    v.push_back(2);
    cout << "Capacity of Vector is -> " << v.capacity() << endl;
    cout << "Elements in Vector is -> " << v.size() << endl;

    // To Insert an Element, we use push_back function
    v.push_back(3);
    cout << "Capacity of Vector is -> " << v.capacity() << endl;
    cout << "Elements in Vector is -> " << v.size() << endl;

    // To Insert an Element, we use push_back function
    v.push_back(6);
    cout << "Capacity of Vector is -> " << v.capacity() << endl;
    cout << "Elements in Vector is -> " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
        // cout << v[i] << " ";
    }
    cout << endl;

    // To Access an Element we can use at function
    cout << "Element at Index 1 is ->" << v.at(1) << endl;

    // First Element in Vector
    cout << "First Element in Vector v is -> " << v.front() << endl;

    // Last Element in Vector
    cout << "Last Element in Vector v is -> " << v.back() << endl;

    // To Remove an Element from end, we use pop_back function
    v.pop_back();
    cout << "Capacity of Vector After pop_back() is -> " << v.capacity() << endl;
    cout << "Elements in Vector After pop_back() is -> " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
        // cout << v[i] << " ";
    }
    cout << endl;

    // Clear is used to clear the vector
    v.clear();
    cout << "Capacity of Vector After clear() is -> " << v.capacity() << endl;
    cout << "Elements in Vector After clear() is -> " << v.size() << endl;
}