class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        first = {}
        count = {}
        ans = len(nums)
        degree = 0

        for i, x in enumerate(nums):
            if x not in first:
                first[x] = i

            count[x] = count.get(x, 0) + 1

            if count[x] > degree:
                degree = count[x]
                ans = i - first[x] + 1
            elif count[x] == degree:
                ans = min(ans, i - first[x] + 1)

        return ans
