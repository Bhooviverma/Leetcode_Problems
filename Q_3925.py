class Solution:
    def concatWithReverse(self, nums: List[int]) -> List[int]:
        return nums + nums[::-1]
