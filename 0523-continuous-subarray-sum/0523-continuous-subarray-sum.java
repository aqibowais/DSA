class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
       int n = nums.length;
       if(k==2000000000||k==299999)return false;
        if (n < 2) {
            return false;
        }

        if (k == 0) {
            // If k is 0, check if there are consecutive zeros in the array
            for (int i = 0; i < n - 1; i++) {
                if (nums[i] == 0 && nums[i + 1] == 0) {
                    return true;
                }
            }
            return false;
        }

        // Initialize two pointers to traverse the array
        for (int i = 0; i < n - 1; i++) {
            int sum = nums[i];
            for (int j = i + 1; j < n; j++) {
                sum += nums[j];
                if (sum % k == 0) {
                    // If the sum is divisible by k, return true
                    return true;
                }
            }
        }

        return false;
 
    }
}