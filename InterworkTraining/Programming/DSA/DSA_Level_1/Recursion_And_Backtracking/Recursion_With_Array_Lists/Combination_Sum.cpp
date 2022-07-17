#include <iostream>
#include <vector>
using namespace std;

void combi_Sum(vector<vector<int>> &res, vector<int> &tempSol, vector<int> &arr, int index, int sum)
{
    if (index >= arr.size())
    {
        if (sum == 0)
        {
            for (int i = 0; i < tempSol.size(); i++)
            {
                cout<<tempSol[i]<<" ";
            }
            cout<<endl;
            res.push_back(tempSol);
        }

        return;
    }

    //Only when arr[index] is less than the target sum value
    if (arr[index] <= sum)
    {
        tempSol.push_back(arr[index]);
        // here we are passing sum value as given (target sum - arr[index]) which will reduce the sum value
        combi_Sum(res, tempSol, arr, index, sum - arr[index]);
        tempSol.pop_back();
    }

    // Calling function to get another solutions (When No Solution Found)
    combi_Sum(res, tempSol, arr, index + 1, sum);
}

vector<vector<int>> display(vector<int> arr, int sum)
{
    vector<vector<int>> res;
    vector<int> tempSol;
    combi_Sum(res, tempSol, arr, 0, sum);

    return res;
}

int main()
{
    int sum;
    // vector<int> arr = {2, 3, 5};


    vector<int> arr;
    int n;
    cout<<"Enter Size of Vector :";
    cin>>n;
    int val;
    cout<<"Enter Elements in Vector : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    // int arr2[]={3,2,1};
    // Sequence(res, tempRes, arr, 0);



    cout << "Enter Value of Sum : ";
    cin >> sum;

        cout<<"The Subsequences Whose sum is "<<sum<< " are "<<endl;
    display(arr,sum);

}