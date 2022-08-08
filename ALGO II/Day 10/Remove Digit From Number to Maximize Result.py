class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        sql=[]
        pql=[]
        
        for t in range(0,len(number)):
            if(number[t]==digit):
                pql.append(t)
                
        for pr in pql:
            answer=number[0:pr]+number[pr+1::]
            sql.append(int(answer))
            
        right=str(max(sql))
        
        return right
        
