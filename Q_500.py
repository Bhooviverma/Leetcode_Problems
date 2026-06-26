class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        row1 = set("qwertyuiop")
        row2 = set("asdfghjkl")
        row3 = set("zxcvbnm")
        ans = []
        for word in words:
            w = word.lower()
            if set(w) <= row1 or set(w) <= row2 or set(w) <= row3:
                ans.append(word)
        return ans
