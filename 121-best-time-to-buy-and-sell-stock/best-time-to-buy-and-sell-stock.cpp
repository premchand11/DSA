class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            int cur=prices[i]-mini;
            maxi=max(maxi,cur);
            mini=min(prices[i],mini);
            

        }return maxi;
        
    }
};