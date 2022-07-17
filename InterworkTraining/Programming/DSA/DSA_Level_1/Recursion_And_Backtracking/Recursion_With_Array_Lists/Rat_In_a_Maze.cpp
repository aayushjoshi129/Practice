#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

void Maze(int row, int col, int n, string temp, vector<string> &ans, vector<vector<int>> &m)
{
    // If any of them crosses its limits , then the code will return;
    if (row < 0 || row == n || col < 0 || col == n)
    {
        return;
    }
    // If row and column reaches its final position i.e, m[n][n] , add that path to ans vector
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(temp);
        return;
    }

    Maze(row + 1, col, n, temp + "D", ans, m);
    Maze(row -1, col, n, temp + "U", ans, m);
    Maze(row, col - 1, n, temp + "L", ans, m);
    Maze(row, col + 1, n, temp + "R", ans, m);
    return;

}

void display(int row, int col, int n, vector<vector<int>> &m)
{
    string temp="";
    vector<string> ans;

    Maze(row, col, n, temp, ans, m);
    sort(ans.begin(),ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    vector<vector<int>> m;
    cout<<"Enter Elements in Array : ";
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            int val;
            cin>>val;
            row.push_back(val);
        }
        m.push_back(row);
        
    }
    
    display(0, 0, n,m);

}