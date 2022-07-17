#include <iostream>
#include <vector>
using namespace std;

// VECTORS
template <class T> // This will create a template now any function can use this to access any kind of funtion having integer , float , char , bool etc.
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
        // cout<<v[i]<<" ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; // Vector is a kind of Dynamic Array

    int val, size;
    cout << "Enter Size : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element to add here ";
        cin >> val;
        vec1.push_back(val);
        /* code */
    }
    display(vec1);
    vec1.pop_back(); // Delete element from end
    display(vec1);
    vector<int>::iterator iter = vec1.begin(); // Creating an Iterator which is usually used as a pointer.
    vec1.insert(iter, 33);
    display(vec1);

    return 0;
}