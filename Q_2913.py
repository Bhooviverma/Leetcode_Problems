class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        ans=0
        for i in range(len(nums)):
            a=[]
            for j in range(i,len(nums)):
                if nums[j] not in a:
                    a.append(nums[j])
                ans=ans+len(a)*len(a)
        return ans    
