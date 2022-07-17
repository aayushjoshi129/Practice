#include <iostream>
#include <vector>
using namespace std;

vector<string> MazePaths(int sr, int sc, int dr, int dc)
{

    // sc is starting column
    // sr is starting row
    // dc is destination column
    // dr is destination row

    if (sc == dc && sr == dr)
    {
        vector<string> bres;
        bres.push_back("");
        return bres;
    }

    vector<string> hpaths;
    vector<string> vpaths;

    if (sc < dc)
    {
        hpaths = MazePaths(sr, sc + 1, dr, dc);
    }

    if (sr < dr)
    {
        vpaths = MazePaths(sr + 1, sc, dr, dc);
    }

    vector<string> Paths;

    for (string hpath : hpaths)
    {
        Paths.push_back("h" + hpath);
    }

    for (string vpath : vpaths)
    {
        Paths.push_back("v" + vpath);
    }

    return Paths;
}

int main()
{
    int n;
    cout << "Enter Ending Point : ";
    cin >> n;
    vector<string> mp = MazePaths(1, 1, n, n);
    for (int i = 0; i < mp.size(); i++)
    {
        cout << mp[i] << endl;
    }

    return 0;
}