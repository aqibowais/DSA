class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        return count_if(begin(nums),end(nums),[](int n){return n % 3;});
    }
};