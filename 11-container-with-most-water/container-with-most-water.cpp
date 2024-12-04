class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxarea=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int current=min(height[left],height[right])*(right-left);
            maxarea=max(current,maxarea);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        } return maxarea;

        
    }
};