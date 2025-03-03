class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ansa;
        vector<int> ansb;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                ansa.push_back(nums[i]);
            } else if (nums[i] > pivot) {
                ansb.push_back(nums[i]);
            } else
                count++;
        }
        for (int i = 0; i < ansa.size(); i++) {
            nums[i] = ansa[i];
        }
        for (int i = 0; i < count; i++) {
            nums[ansa.size() + i] = pivot;
        }
        for (int i = 0; i < ansb.size(); i++) {
            nums[ansa.size() + i + count] = ansb[i];
        }
        return nums;
    }
};