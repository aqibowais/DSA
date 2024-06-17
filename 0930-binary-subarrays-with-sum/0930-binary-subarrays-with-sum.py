class Solution(object):
    def numSubarraysWithSum(self, nums, goal):
        count = 0
        current_sum = 0
        cumulative_sum_count = {0: 1}  # Dictionary to count cumulative sums
        
        for num in nums:
            current_sum += num
            if current_sum - goal in cumulative_sum_count:
                count += cumulative_sum_count[current_sum - goal]
            
            if current_sum in cumulative_sum_count:
                cumulative_sum_count[current_sum] += 1
            else:
                cumulative_sum_count[current_sum] = 1
        
        return count

"""
:type nums: List[int]
:type goal: int
:rtype: int
"""