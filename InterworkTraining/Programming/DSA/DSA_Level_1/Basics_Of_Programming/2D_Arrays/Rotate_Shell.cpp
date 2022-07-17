#include<iostream>
using namespace std;

int reverse(int arr[],int i,int j){
    int li = i;
    int ri = j;
    while(li<ri){
        char temp = arr[li];
        arr[li] = arr[ri];
        arr[ri] = temp; 
        li++;
        ri--;
    }
    return 1;
}

int StoreInArray(int arr[100][100],int s,int size){

}

int rotateShell(int arr[100][100],int s, int r){
    
}

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



    // 1. Store in 1D Array
    // 2. Rotate 1D Array r times
    // 3. Convert 1D Array into Shell



}