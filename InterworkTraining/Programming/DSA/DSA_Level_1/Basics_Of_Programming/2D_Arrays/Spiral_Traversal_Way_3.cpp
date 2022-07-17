#include <iostream>
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

    // from top-->right-->bottom-->left

    int mincol=0,minrow=0,maxcol=col-1,maxrow=row-1;
    while(minrow < row && mincol < col){

        // for Top Row / Wall
        for(int i=minrow,j=mincol;j<=maxcol;j++){
            cout<<arr[i][j]<<endl;
        }
        minrow+=1;

        // for Right Col / Wall
        for(int i=minrow,j=maxcol;i<=maxrow;i++){
            cout<<arr[i][j]<<endl;
        }
        maxcol-=1;

        // for Bottom Row / Wall
        for(int i=maxrow,j=maxcol;j>=mincol;j--){
            cout<<arr[i][j]<<endl;
        }
        maxrow-=1;

        // for Left Row / Wall
        for(int i=maxrow,j=mincol;i>=minrow;i--){
            cout<<arr[i][j]<<endl;
        }
        mincol+=1;
    }
}