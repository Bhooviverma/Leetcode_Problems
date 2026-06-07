class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        l=[]
        r=[]
        ans=[]
        for i in range(len(nums)):
            lsum=sum(nums[:i])
            rsum=sum(nums[i+1:])
            l.append(lsum)
            r.append(rsum)
        for i in range(len(nums)):
            ans.append(abs(l[i]-r[i]))
        return ans        
