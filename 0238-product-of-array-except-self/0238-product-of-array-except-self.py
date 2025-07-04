class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pref = 1
        res = [1]*len(nums)
        for i in range(len(nums)):
            res[i] = pref
            pref*=nums[i]
        
        post = 1
        for i in range(len(res)-1,-1,-1):
            res[i] *= post
            post*=nums[i]
        
        return res
