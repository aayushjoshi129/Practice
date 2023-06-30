// Sorting - It uses IntroSort which is combination of 3 sorting algo's i.e., Quick Sort, Heap Sort and Insertion Sort.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // Using Binary Search Algorithm
    cout << "5 is present or not -> " << binary_search(v.begin(), v.end(), 5) << endl;

    // Using Binary Search Algorithm
    cout << "3 is present or not -> " << binary_search(v.begin(), v.end(), 3) << endl;

    // max
    cout << "Max of 30 and 25 is " << max(25, 30) << endl;

    // min
    cout << "Min of 30 and 25 is " << min(25, 30) << endl;

    int a = 25, b = 30;
    // value of A and B before swapping
    cout << "Value of A and B before Swapping is -> " << a << " " << b << endl;

    // swap
    swap(a, b);
    // value of A and B before swapping
    cout << "Value of A and B After Swapping is -> " << a << " " << b << endl;

    // Reverse a String
    string abcd = "abcd";
    cout << "Value of String Before Reversing is -> " << abcd << endl;

    reverse(abcd.begin(), abcd.end());
    cout << "Value of String After Reversing is -> " << abcd << endl;

    // Rotating a Vector
    cout << "Value of Vector Before Rotating is -> " << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Rotating a Vector
    cout << "Value of Vector After Rotating is -> " << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sorting - It uses IntroSort which is combination of 3 sorting algo's i.e., Quick Sort, Heap Sort and Insertion Sort.

    cout << "Value of Vector After Sorting is -> " << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}