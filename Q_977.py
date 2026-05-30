class Solution:
    def sortedSquares(self, n: List[int]) -> List[int]:
        for i in range (len(n)):
            n[i]=n[i]**2
        n.sort() 
        return n      
