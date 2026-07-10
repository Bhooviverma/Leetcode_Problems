class Solution:
    def limitOccurrences(self, nums: list[int], k: int) -> list[int]:
        ans= []
        for num in nums:
            if len(ans)<k or ans[-k]!=num:
                ans.append(num)
        return ans
