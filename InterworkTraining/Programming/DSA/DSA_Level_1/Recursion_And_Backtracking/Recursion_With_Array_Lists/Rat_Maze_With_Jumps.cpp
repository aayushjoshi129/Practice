#include <iostream>
#include <vector>
using namespace std;

vector<string> MazePaths2(int sr, int sc, int dr, int dc)
{

    if (sc == dc && sr == dr)
    {
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    
    vector<string> paths;

    // for right horizontal moves
    for (int h = 1; h <= dc - sc; h++)
    {
       vector<string> paths1 = MazePaths2(sr, sc + h, dr, dc);

        for (string hpath : paths1)
        {
            paths.push_back("h" + to_string(h) + hpath);
        }
    }

    // for right vertical moves
    for (int v = 1; v <= dr - sr; v++)
    {
       vector<string> paths2 = MazePaths2(sr + v, sc, dr, dc);

        for (string vpath : paths2)
        {
            paths.push_back("v" + to_string(v) + vpath);
        }
    } 
    
    // for right diagonal moves
    for (int d = 1; d <= dr - sr && d <= dc - sc; d++)
    {
       vector<string> paths3 = MazePaths2(sr + d, sc + d, dr, dc);
        for (string dpath : paths3)
        {
            paths.push_back("d" + to_string(d) + dpath);
        }
    }

    return paths;
}

void display(int n){
    vector<string> ms = MazePaths2(1,1,n,n);
    cout<<ms.size()<<endl;
    for (int i = 0; i < ms.size(); i++)
    {
        cout<<ms[i]<<endl;
    }
    cout<<endl;
    
}

int main()
{
    int n;
    cout << "Enter Ending Point : ";
    cin >> n;

    display(n);
}