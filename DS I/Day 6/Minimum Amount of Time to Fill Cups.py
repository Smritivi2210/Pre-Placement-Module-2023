class Solution:
    def fillCups(self, amount: List[int]) -> int:
        s=sum(amount)
        f=max(amount)
        l=min(amount)
        if f*2<s and l==0:
            return s-(f*2)
        elif f*2>s:
            return f
        elif f*2==s:
            return f
        else:
            if (s-(f*2))%2!=0:
                
                return max(amount)+((s-(f*2))//2)+1
            else:
                return max(amount)+((s-(f*2))//2)
              
              
