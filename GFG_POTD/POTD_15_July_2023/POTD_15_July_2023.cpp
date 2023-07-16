#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void deleteMid(stack<int> &st, int sizeOfStack)
{
    // code here..
    int mid = (sizeOfStack + 1) / 2 - 1;

    vector<int> arr;
    while (!st.empty())
    {
        int ele = st.top();
        st.pop();

        arr.push_back(ele);
    }

    for (int i = 0; i < sizeOfStack; i++)
    {
        if (i == mid)
            continue;
        st.push(arr[sizeOfStack - 1 - i]);
    }
}

int main()
{
    int sizeOfStack;
    cout << "Enter Size of Stack:";
    cin >> sizeOfStack;

    stack<int> myStack;

    for (int i = 0; i < sizeOfStack; i++)
    {
        int x;
        cout << "Enter " << i + 1 << " Element in Stack:";
        cin >> x;
        myStack.push(x);
    }

    deleteMid(myStack, myStack.size());

    cout << "Stack After Deleting Mid Element is:";

    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
    return 0;
}