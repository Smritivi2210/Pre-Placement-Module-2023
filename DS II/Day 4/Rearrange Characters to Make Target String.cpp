class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        r=set(target)
        isum=[]
        psum=float('inf')
        for i in r:
            ssum=target.count(i)
            lsum=s.count(i)
            if(lsum//ssum>=0):
                q=lsum//ssum
                psum=min(psum,q)
            else:
                return 0
        return psum        
        
