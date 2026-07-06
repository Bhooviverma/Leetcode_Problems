from collections import Counter

class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        count = Counter(s1.split()) + Counter(s2.split())
        ans = []
        for word in count:
            if count[word] == 1:
                ans.append(word)  
        return ans
