class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closest = 1000000000000;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            int l=i+1; int h=n-1;
            while(l<h){
                int sum = nums[i]+nums[l]+nums[h];
                if(sum == target) return sum;
                else if(abs(target-sum)<abs(target-closest)) closest = sum;
                else if(target-sum>0) l++;
                else h--;
            }
        }
        return closest;                                                                       
        
    }
};
