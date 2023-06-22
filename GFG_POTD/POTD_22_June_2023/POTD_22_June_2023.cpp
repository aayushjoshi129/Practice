



#include <iostream>
using namespace std;

int beach(int arr[], int N)
{
    int note5 = 0;
    int note10 = 0;
    int note20 = 0;
    bool flag = false;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 5)
        {
            note5 += 1;
            flag = true;
        }

        else if (arr[i] == 10)
        {
            if (note5 > 0)
            {
                note5 -= 1;
                note10 += 1;
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if (arr[i] == 20)
        {
            if (note5 > 0 && note10 > 0)
            {
                note5 -= 1;
                note10 -= 1;
                flag = true;
            }
            else if (note5 > 2)
            {
                note5 -= 3;
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int N;
    int arr[100];
    cout << "Enter No. of Elements:";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter " << i + 1 << " Element in Array : ";
        cin >> arr[i];
    }

    beach(arr, N) ? cout << "true" : cout << "false" << endl;

}