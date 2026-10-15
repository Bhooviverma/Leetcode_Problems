class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        l=[]
        for i in nums:
            l.append(abs(i))
        l.sort()
        ans=[]
        for i in range(len(l)//2):
            ans.append(l[i]**2)
        for i in range(len(l)//2,len(l)):
            ans.append(-(l[i]**2))     
        return -(sum(ans))    
