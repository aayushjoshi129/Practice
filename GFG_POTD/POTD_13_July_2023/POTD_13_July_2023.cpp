#include <iostream>
#include<unordered_map>
using namespace std;

bool isFrequencyUnique(int n, int arr[])
    {
 unordered_map<int,int>freq; //counting frequency of no.
       unordered_map<int,bool>ff; //checking unique frequency
        for(int i=0;i<n;i++)               
        freq[arr[i]]++;                         //freq. count
        for(int i=0;i<n;i++)
        {
            if(freq[arr[i]])                    
            {
               if(ff[freq[arr[i]]])            // true when dual freq. exist
               return 0;
               ff[freq[arr[i]]]=1;          
               freq[arr[i]]=0;             //initializing zero so that it                                                         //could not enter in if condition
            }
        }
        return 1;
    }

int main()
{
    int n;
    int arr[100];
    cout << "Enter No. of elements in Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in the Array : ";
        cin >> arr[i];
    }
    if (isFrequencyUnique(n, arr))
    {
        cout << "All the elements has unique frequency" << endl;
    }
    else
    {
        cout << "No all the elements has unique frequency" << endl;
    }
    return 0;
}