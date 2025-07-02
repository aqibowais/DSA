class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # for i in range(len(nums)):
        #     for j in range(i+1,len(nums)):
        #         if(nums[i]+nums[j]==target):
        #             return [i,j]

        # one pass using hashmap o(n) tc and Sc

        prevMap = {}
        for i,num in enumerate(nums):
            diff = target - num
            if diff in prevMap:
                return [prevMap[diff],i]
            prevMap[num] = i
        