class Solution:
    def canChange(self, start: str, target: str) -> bool:
        lo=0
        fi=0
        t=0
        g=0
        for i in start:
            if i=="L":
                lo+=1
            elif i=="R":
                fi+=1 
        for i in target:
            if i=="L":
                t+=1
            elif i=="R":
                g+=1
        if lo==t and fi==g:
            j=[]
            k=[]
            for i in range(0,len(start)):
                if start[i]!="_":
                    j.append(i)
            for i in range(0,len(target)):
                if target[i]!="_":
                    k.append(i)
            b=1
            for i in range(0,len(j)):
                if start[j[i]]!=target[k[i]]:
                    b=0
                else:
                    if start[j[i]]=="L":
                        if j[i]<k[i]:
                            b=0
                    else:
                        if j[i]>k[i]:
                            b=0
            if b==1:
                return True
            return False
        return False
