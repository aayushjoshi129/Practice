#include <iostream>
using namespace std;


int main()
{

    // taking user inputs
    int N, K;
    char arr[100];
    cout << "Enter the no. of characters:";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter " << i + 1 << " Character in Array : ";
        cin >> arr[i];
    }

    cout << "Enter the value of K:";
    cin >> K;


        int charFrq[26] = {0};
        int mxfrq = 0;
        for(int i=0;i<N;i++)
        {
            charFrq[arr[i]-'A']++;
            mxfrq = max(mxfrq,charFrq[arr[i]-'A']);
        }
        int mxctr = 0;
        for(int i=0;i<26;i++)
        {
            if(charFrq[i]==mxfrq)
            {
                mxctr++;
            }
        }
        int ans = (mxfrq-1)*(K+1) + mxctr;
        ans = max(ans,N);
        
        cout<<ans<<endl;
}