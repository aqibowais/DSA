class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 1;
        int j = k ;
        if(n==1)return nums;
        vector<int> result(n-k+1,-1);
       for (int i = 0; i < n - k; ++i)
    {
        bool isSorted = true;
        for (int j = i; j < i + k - 1; ++j)
        {
            if (nums[j] > nums[j + 1])
            {
                isSorted = false;
                break;
            }
        }
        if (isSorted && nums[i+1]-nums[i]==1)
        {
            result[i] = *max_element(nums.begin() + i, nums.begin() + i + k);
        }
    }
        return result;
    }
};