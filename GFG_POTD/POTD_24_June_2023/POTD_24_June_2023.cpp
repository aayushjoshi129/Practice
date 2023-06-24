#include <iostream>
using namespace std;

int finder(string arr[], int N, int k, string str)
{
    int counter=0;
    for (int i = 0; i < N; i++)
    {
        if ((str.substr(0, k) == arr[i].substr(0, k)) && arr[i].length()>=k)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{

    // taking user inputs
    int N, k;
    string arr[100], str;
    cout << "Enter the no. of strings:";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter " << i + 1 << " String in Array : ";
        cin >> arr[i];
    }


    cout << "Enter the string to check:";
    cin >> str;

    cout << "Enter the value of k:";
    cin >> k;

    cout<<"the count of strings in arr[] whose prefix of length k matches with the k-length prefix of str is: "<< finder(arr,N,k,str);
}