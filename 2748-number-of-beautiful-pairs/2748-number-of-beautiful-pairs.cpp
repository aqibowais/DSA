class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int a = to_string(nums[i])[0]-'0';
                int b = nums[j]%10;
                if(gcd(a,b)==1){
                    count++;
                }
            }
        }
        return count;
    }
};