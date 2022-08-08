class Solution:
    def discountPrices(self, a: str, d: int) -> str:
        p=a.split(" ")
        for i in range(0,len(p)):
            if p[i][0]=="$" and len(p[i])>1:
                if p[i].count('$')==1 :
                    s=(p[i][1::])
                    if s.isnumeric()==True:
                        s1=int(s)
                        c=(d*s1)/100
                        g=round(c,2)
                        k=round((s1-g),2)
                        k1="%.2f" % round(k,2)
                        i1=str(k1)
                        l="$"+i1 
                        p[i]=l 

        x=""
        for i in p:
            x=x+i+" "
        return x[:len(x)-1]
