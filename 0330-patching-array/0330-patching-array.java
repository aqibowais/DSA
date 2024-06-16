class Solution {
    public int minPatches(int[] nums, int n) {
        long currSum = 1;
        int idx = 0;
        int patches = 0;
        while(currSum <= n){
            if(idx < nums.length && nums[idx]<=currSum){
                currSum += nums[idx];
                idx++;
            }
            else{
                currSum += currSum;
                patches++;
            }
        }
        return patches;
    }
}