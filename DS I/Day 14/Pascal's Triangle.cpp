class Solution:
    def generate(self, n: int) -> List[List[int]]:
        a=[1]
        b=[1,1]
        
        d=[]
        f=[]
        d1=[]
        d.append(a)
        d1.append(a)
        d1.append(b)
        if n==1:
            return d
        elif n==2:
            return d1
        else:
            for i in range(3,n+1):
                f=[]
                f.append(1)
                for j in range(0,len(b)-1):
                    r=b[j]+b[j+1]
                    f.append(r)
                f.append(1)
                d1.append(f)
                b=f
                
                
            return d1
            
            
        
