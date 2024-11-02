class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        vector<vector<int>>index;
        for(int i=0;i<n;i++){
            index.push_back({nums[i],i});
        }
        sort(index.begin(),index.end(),[](const vector<int>&a,const vector<int>& b){
            return a[0]<b[0];});
        int left=0;
        int right=n-1;
        while(left<right){
            int sum=index[left][0]+index[right][0];
            if(sum==target){
                ans.push_back(index[left][1]);
                ans.push_back(index[right][1]);
                return ans;
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        } return{-1,-1};

    }
};