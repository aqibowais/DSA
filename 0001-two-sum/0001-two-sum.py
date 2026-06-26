class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # brute force
        # for i in range(len(nums)):
        #     for j in range(i+1,len(nums)):
        #         if nums[i]+nums[j]==target:
        #             return [i,j]

        # using hashmap
        prevmap = {} # value:idx
        for i,n in enumerate(nums):
            diff = target - n
            if diff in prevmap:
                return [prevmap[diff],i]
            prevmap[n] = i
        return
