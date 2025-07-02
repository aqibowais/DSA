class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # tc = O(nlogn)
        count = {}

        for i,num in enumerate(nums):
            count[num] = 1 + count.get(num,0)

        # arr = []
        # for num,cnt in count.items():
        #     arr.append([cnt,num])
        # arr.sort()
        # res = []
        # while len(res)<k:
        #     res.append(arr.pop()[1])
        # return res

        # using min-heap tc O(nlogk) n for freq storing and logk for deletion in heap
        heap = []
        for num in count.keys(): 
            heapq.heappush(heap,(count[num],num)) # count[num] is basically the freq, so storing on the basis of highest freq and no need to store as by default it will be min-heap and store the largest value at bottom
            if len(heap)>k:
                heapq.heappop(heap)
        
        res = []
        for i in range(k):
            res.append(heapq.heappop()[1])
        return res