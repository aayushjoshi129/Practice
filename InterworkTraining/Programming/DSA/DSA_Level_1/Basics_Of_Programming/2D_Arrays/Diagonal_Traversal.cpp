#include<iostream>
using namespace std;

int main(){
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

    // Printing Diagonal
    
    for(int g=0;g<col;g++){
        for(int i=0,j=g;j<col;i++,j++)
        cout<<arr[i][j]<<" ";
    }

cout<<endl;
}
