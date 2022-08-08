class Solution:
    def digitCount(self, num: str) -> bool:
        ress=list(num)
        for i in range(0,len(ress)):
            if ress[i]!=str(ress.count(str(i))):
                return False
            
        return True
    
