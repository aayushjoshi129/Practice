#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
    // write your code here
    if (sr == dr && sc == dc)
    {
        cout << psf << endl;
        return;
    }
    // for horizontal movement
    if (sc < dc)
    {
        printMazePaths(sr, sc + 1, dr, dc, psf + "h");
    }

    // for Vertical movement
    if (sr < dc)
    {
        printMazePaths(sr + 1, sc, dr, dc, psf + "v");
    }
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}