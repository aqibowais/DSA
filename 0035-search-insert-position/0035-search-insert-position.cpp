class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int strt = 0;
        int end = nums.size()-1;
        while(strt<=end){
            int mid = strt + (end-strt)/2; 
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                end = mid-1;
            }
            else {
                strt = mid+1;
            }
        }return strt;
    } 
    
};