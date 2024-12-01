class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int moren= target-num;
            if(mpp.find(moren)!=mpp.end()){
                return{mpp[moren],i};
            }mpp[num]=i;
        } return{-1,-1};

        
    }
};