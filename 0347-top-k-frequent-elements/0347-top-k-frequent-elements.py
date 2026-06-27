class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqmap = {}
        for i,n in enumerate(nums):
            if n in freqmap:
                freqmap[n]+=1
            else: freqmap[n] = 1

        return heapq.nlargest(k, freqmap, key=freqmap.get)