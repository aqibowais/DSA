class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        boolean[] check = new boolean[nums.length+1];
        for(int num : nums){
            check[num] = true;
        }
        for(int i=0;i<n;i++){
            if(!check[i]) return i;
        }
        return n;
    }
}