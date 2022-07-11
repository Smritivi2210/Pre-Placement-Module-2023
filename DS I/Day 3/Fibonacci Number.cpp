class Solution {
public:
    int fib(int n) {
        int n1=0,m=1,curr;
        if(n<=1){
            return n;
        }
        for(int i=2;i<=n;i++){
            curr=n1+m;
            n1=m;
            m=curr;
        }
        return curr;
    }
};
