#include <iostream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1)
{
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);

        if (i == 0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

class Solution
{
public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node *segregate(Node *head)
    {

        // Add code here
        Node *temp = head;
        int zero = 0, one = 0, two = 0;
        while (temp)
        {
            if (temp->data == 0)
                zero++;
            else if (temp->data == 1)
                one++;
            else
                two++;

            temp = temp->next;
        }
        temp = head;
        while (zero--)
        {
            temp->data = 0;
            temp = temp->next;
        }
        while (one--)
        {
            temp->data = 1;
            temp = temp->next;
        }
        while (two--)
        {
            temp->data = 2;
            temp = temp->next;
        }
        return head;
    }
};

int main()
{
    int n;

    scanf("%d", &n);

    insert(n);
    Solution ob;
    struct Node *newHead = ob.segregate(start);
    printList(newHead);
}