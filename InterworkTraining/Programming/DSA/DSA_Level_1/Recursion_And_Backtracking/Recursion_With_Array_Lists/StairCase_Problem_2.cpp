#include <iostream>
#include <vector>
using namespace std;

void Paths(vector<vector<int>> &res, vector<int> &temp, int start, int counter, int stairs)
{
    if (counter > 3)
    {
        return;
    }
    if (start > stairs)
    {

        if (stairs == 0)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                cout << temp[i] << " ";
            }
            cout << endl;
            res.push_back(temp);
        }
        return;
    }

    if (start <= stairs)
    {
        if (stairs-1 == counter)
        {
            temp.push_back(counter);
            //Picking Up
            Paths(res, temp, start, counter , stairs - start);
            temp.pop_back();
        }
        if (stairs-2 == counter)
        {
            temp.push_back(counter);
            //Picking Up
            Paths(res, temp, start, counter + 1, stairs - start);
            temp.pop_back();
        }
        if (stairs-3 == counter)
        {
            temp.push_back(counter);
            //Picking Up
            Paths(res, temp, start, counter + 2, stairs - start);
            temp.pop_back();
        }

            temp.push_back(start);
            //Picking Up
            Paths(res, temp, start, start, stairs - start);
            temp.pop_back();
    }

    //Droping and moving to next
    Paths(res, temp, start + 1, counter + 1, stairs);
}

void display(int stairs)
{
    vector<vector<int>> res;
    vector<int> temp;
    Paths(res, temp, 1, 1, stairs);
}

int main()
{
    int stairs;
    cout << "Enter No. of Stairs : ";
    cin >> stairs;
    display(stairs);
}