class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # brute force T(o) = 0(n^2) & s(o) = O(1) 
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]==nums[j]:
                    return True
        return False
        # seen = set()
        # for num in nums:
        #     if num in seen:
        #         return True
        #     seen.add(num)
        # return False