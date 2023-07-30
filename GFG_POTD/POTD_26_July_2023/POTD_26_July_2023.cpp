#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <string>
#include <sstream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}
int kthAncestor(Node *root, int k, int node);

int main()
{

    int k, node;
    scanf("%d ", &k);
    scanf("%d ", &node);
    string s;
    getline(cin, s);
    Node *root = buildTree(s);
    cout << kthAncestor(root, k, node) << endl;
}

int getDistance(Node *root, int k, int node, int dis, int *ans)
{
    if (!root)
        return -1;
    if (root->data == node)
        return dis;
    int left = getDistance(root->left, k, node, dis + 1, ans);
    if (left != -1)
    {
        if (left - dis == k)
        {
            *ans = root->data;
            return -1;
        }
        else
            return left;
    }
    int right = getDistance(root->right, k, node, dis + 1, ans);
    if (right != -1)
    {
        if (right - dis == k)
        {
            *ans = root->data;
            return -1;
        }
        else
            return right;
    }
    return -1;
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    int ans = -1;
    getDistance(root, k, node, 0, &ans);
    return ans;
}