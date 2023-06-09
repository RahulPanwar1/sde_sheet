#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans = 0;
    int mini = prices[0];
    int profit = 0;
    for(int i =0;i<prices.size();i++)
    {
        mini = min(prices[i], mini);
        profit = prices[i] - mini;
        ans = max(ans , profit);
    }
    return ans;
}
