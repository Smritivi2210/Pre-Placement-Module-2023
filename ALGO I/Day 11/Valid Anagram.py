class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        flag=0
        g=set(s)
        for i in g:
            if s.count(i)!=t.count(i):
                flag=1
                break
        if flag==0 and len(s)==len(t):
            return True 
        else:
            return False
