class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        k=""
        r=list(key)
        d=[]
        for i in r:
            if i!=" " and i not in d:
                d.append(i)
        f=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
        for i in range(0,len(message)):
            if message[i]==" ":
                k=k+" "
            else:
                p=d.index(message[i])
                k=k+f[p]
        return k
                
