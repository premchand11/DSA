class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mapp;
        for(int i=0;i<n;i++){
            int com=target-nums[i];
            if(mapp.count(com)){
                return{mapp[com],i};
            }mapp[nums[i]]=i;
        }
        return{-1,-1};
    }
};