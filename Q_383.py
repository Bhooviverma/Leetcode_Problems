class Solution:
    def canConstruct(self, ran: str, mag: str) -> bool:
        for i in ran:
            if i not in mag:
                return False
            mag=mag.replace(i,"",1)
        return True
