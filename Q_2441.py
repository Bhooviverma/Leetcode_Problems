class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        max=-1
        for i in nums:
            for j in nums:
                if i>0 and i== -j:
                    if i > max:
                        max=i
        return max
