// STACK - It Follows LAST IN FIRST OUT Approach (LIFO)

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // Initializing a stack
    stack<string> s;

    // To Insert an Element in stack from back & Front, we can use pop_back() && pop_front()
    s.push("Aayush");
    s.push("Joshi");
    s.push("Smart");
    s.push("Hai");

    // to print TOP element, we use top()
    cout << "The TOP Element is -> " << s.top() << endl;

    // to print SIZE of Stack
    cout << "Size of Stack Before pop is -> " << s.size() << endl;

    s.pop();
    // to remove TOP element, we use pop()
    cout << "The TOP Element After POP is -> " << s.top() << endl;

    // to print SIZE of Stack
    cout << "Size of Stack After pop is -> " << s.size() << endl;

    // check stack is empty or not
    cout << "Empty or Not -> " << s.empty() << endl;
}