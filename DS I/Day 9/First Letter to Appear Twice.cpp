class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>profit(26,0);
        int flag=0;
        for(auto rpit:s)
        {
            int result=rpit-97;
            profit[result]++;
            if(profit[result]==2)
            {
                flag=1;
                return rpit;
            }
        }
        return 'profit';
    }
};
