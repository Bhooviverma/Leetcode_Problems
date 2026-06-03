class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        c1 = Counter(s)
        c2 = Counter(t)

        for ch in c2:
            if c2[ch] > c1[ch]:
                return ch
