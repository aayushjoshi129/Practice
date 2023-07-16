#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    return q;
}

int main()
{

    queue<int> q;
    int n, var;
    cout << "Enter No. of Elements in Queue:";
    cin >> n;
    while (n--)
    {
        cout << "Enter Element in Queue:";
        cin >> var;
        q.push(var);
    }
    queue<int> a = rev(q);
    cout << "Queue After Reversal is: ";
    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
    cout << endl;
    return 0;
}