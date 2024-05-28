class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, zero = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) ++zero;
            else product *= nums[i];
        }
        for (auto& num : nums) {
            if (zero > 1) num = 0;
            else if (zero == 1) {
                if (num == 0) num = product;
                else num = 0;
            }
            else num = product / num;
        }
        return move(nums);
    }
};

