class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxpro=INT_MIN;
        int mini=prices[0];
        for(int i=0;i<n;i++){
            int prof=prices[i]-mini;
            maxpro=max(maxpro,prof);
            mini=min(mini,prices[i]);
        }return maxpro;
        
    } 
};