#include <iostream>
#include <vector>
using namespace std;

void Sequence(vector<vector<int>> &res, vector<int> &tempRes, vector<int> &arr, int index)
{
    if (index >= arr.size())
    {
        for(int i =0;i<tempRes.size();i++){
            cout<<tempRes[i]<<" ";
        }
        if(tempRes.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        res.push_back(tempRes);
        return ;
    }

    // Picking up the Element
    tempRes.push_back(arr[index]);
    Sequence(res, tempRes, arr, index + 1);
    tempRes.pop_back();
    
    // Not Picking up the Element
    Sequence(res, tempRes, arr, index + 1);
}

vector<vector<int>> display(vector<int> &arr){
    vector<vector<int>> res;
    vector<int> tempRes;
    Sequence(res,tempRes,arr,0);
    return res;
}

int main()
{
    // vector<int> tempRes;
    // vector<vector<int>> res;
    // vector<int> arr = {3, 1, 2};
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
    cout<<"The Subsequences are "<<endl;
    display(arr);    
}