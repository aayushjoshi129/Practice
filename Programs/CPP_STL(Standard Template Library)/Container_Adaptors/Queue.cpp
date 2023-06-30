// QUEUE - It Follows FIRST IN FIRST OUT Approach (FIFO)

#include<iostream>
#include<queue>
using namespace std;

int main(){

    // Initializing a queue
    queue<string> q;

        // To Insert an Element in queue from back & Front, we can use pop_back() && pop_front()
    q.push("Aayush");
    q.push("Joshi");
    q.push("Smart");
    q.push("Hai");

        // to print front element, we use front()
    cout << "The front Element is -> " << q.front() << endl;

    // to print SIZE of queue
    cout << "Size of queue Before pop is -> " << q.size() << endl;

    q.pop();
    // to remove front element, we use pop()
    cout << "The front Element After POP is -> " << q.front() << endl;

    // to print SIZE of queue
    cout << "Size of queue After pop is -> " << q.size() << endl;

    // check queue is empty or not
    cout << "Empty or Not -> " << q.empty() << endl;
}