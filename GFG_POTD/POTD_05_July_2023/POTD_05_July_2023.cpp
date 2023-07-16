#include <iostream>
#include <vector>
using namespace std;

int stockBuyAndSell(int n, vector<int> &prices)
{
    // code here
    int ans = 0;
    for (int i = 1; i < n; i++)
        if (prices[i] > prices[i - 1])
            ans += prices[i] - prices[i - 1];
    return ans;
}

int main()
{
    int n, a;
    vector<int> arr;
    cout << "Enter No. of Stocks: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Price of Stocks: ";
        cin >> a;
        arr.push_back(a);
    }
    int ans = stockBuyAndSell(n, arr);
    cout << "The Maximum Profit from this Stock Prices is " << ans << endl;
}