class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        // Approach 1
        // int count = 0;
        // for (int start = 0; start < nums.length; start++) {
        //     int sum = 0;
        //     for (int end = start; end < nums.length; end++) {
        //         sum += nums[end];
        //         if (sum % k == 0) {
        //             count++;
        //         }
        //     }
        // }
        
        // return count;

        // Approach 2
        int count = 0;
        int sum = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(0,1);

        for(int num : nums){
            sum += num;
            int mod = sum%k;

            if(mod<0) mod+=k;
            if(map.containsKey(mod)){
                count += map.get(mod);
                map.put(mod,map.get(mod)+1);
            }else{
                map.put(mod,1);
            }
        }
        return count;
    }
}
