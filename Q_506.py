class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        s=sorted(score, reverse=True)
        rank= {}
        for i in range(len(s)):
            if i==0:
                rank[s[i]]="Gold Medal"
            elif i== 1:
                rank[s[i]]="Silver Medal"
            elif i == 2:
                rank[s[i]]="Bronze Medal"
            else:
                rank[s[i]]=str(i + 1)
        ans=[]
        for x in score:
            ans.append(rank[x])
        return ans
