class Solution {
public:
    int divisorSubstrings(int num, int k) {
         string s = to_string(num);
        int n = s.length();
        int i=0,ans =0;
        while(i<n-k+1){
            string temp  = s.substr(i,k);
            int r = stoi(temp);
            if(r==0)ans = ans;
            else if(num%r==0)ans++;
            i++;
        }
        return ans;
        
    }
};
