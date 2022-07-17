// Saddle Point is one whose value is minimum at its row but maximum at its column

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter no. of Rows : ";
    cin >> row;
    cout << "Enter no. of Columns : ";
    cin >> col;
    int arr[100][100];
    cout << "Enter Elements in Array : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxcol = col - 1, maxrow = row - 1;

    //Checking Per Row
    for (int i = 0; i <= maxrow; i++)
    {
        int svj = 0;
        // Finding the least value in all columns
        for (int j = 1; j <= maxcol; j++)
        {

            if (arr[i][j] < arr[i][svj])
            {
                svj = j;
            }
        }


        bool flag = true;   // Assuming arr[i][svj] to be the Saddle Point
        // Finding the maximum value in all rows and svj(Smallest Value j) column
        for(int k=0;k<=maxrow;k++){
            if(arr[k][svj]>arr[i][svj]){    // if any value is greater than arr[i][svj] means that arr[i][svj] is not the max value or Saddle Point
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<endl<<"Saddle Point is "<<arr[i][svj]<<endl;
        }
    }
    cout<<endl;
}