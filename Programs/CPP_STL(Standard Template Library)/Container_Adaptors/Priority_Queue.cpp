// PRIORITY QUEUE - It's first element will always have greatest priority.
#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // Initializing a max_heap
    priority_queue<int> maxi;

    // Initializing a min_heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // To Insert an Element in max_heap, we can use push()
    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(2);

    // To check heap is empty or not before pop
    cout<<"MaxHeap Empty or Not -> "<<maxi.empty()<<endl;
int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;


    // To Insert an Element in min_heap, we can use push()
    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(2);

    // To check heap is empty or not before pop
    cout<<"MinHeap Empty or Not -> "<<mini.empty()<<endl;
    
int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    // To check heap is empty or not after pop
    cout<<"MaxHeap Empty or Not -> "<<maxi.empty()<<endl;
    cout<<"MinHeap Empty or Not -> "<<mini.empty()<<endl;
}