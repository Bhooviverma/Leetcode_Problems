class Solution:
    def minElement(self, nums: List[int]) -> int:
        
        def digit_sum(n):
            s = 0
            while n > 0:
                s = s + (n%10)
                n = n//10
            return s

        ans = digit_sum(nums[0])

        for n in nums:
            ans = min(ans, digit_sum(n))

        return ans
