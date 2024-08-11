class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int par_sum = nums[0];
        for(int i=1; i<n ;i++){
            par_sum += nums[i];
        }
        return sum-par_sum; 
    }
};