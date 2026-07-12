class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        s =list(set(arr))
        s.sort()

        d={}
        r=1

        for num in s:
            d[num]=r
            r+=1
        result=[]
        for num in arr:
            result.append(d[num])
        return result
