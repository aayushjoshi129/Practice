#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{

    if (sr == dr && sc == dc)
    {
        cout << psf << endl;
        return;
    }
    // for horizontal moves
    for (int ms = 1; ms <= dc - sc; ms++)
    {
        if (sc < dc)
        {
            printMazePaths(sr, sc + ms, dr, dc, psf + "h" + to_string(ms));
        }
    }

    // for vertical moves
    for (int ms = 1; ms <= dr - sr; ms++)
    {
        if (sr < dr)
        {
            printMazePaths(sr + ms, sc, dr, dc, psf + "v" + to_string(ms));
        }
    }

    // for diagonal moves
    for (int ms = 1; ms <= dc - sc && ms <= dr - sr; ms++)
    {
        if (sr < dr && sc < dc)
        {
            printMazePaths(sr + ms, sc + ms, dr, dc, psf + "d" + to_string(ms));
        }
    }
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(1, 1, n, m, "");
}