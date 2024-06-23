class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
       int i = 0, j = 0, ans = 1, diff = -1;
        for (i = 0; i < nums.size() - 1; i++) {
            if(nums.size()-i<ans){
                break;
            }
            int mini = nums[i];
            int maxi = nums[i];
            for (j = i + 1; j < nums.size(); j++) {
                mini=min(nums[j],mini);
                maxi=max(nums[j],maxi);
                if (maxi-mini <= limit) {
                    ans=max(ans,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};