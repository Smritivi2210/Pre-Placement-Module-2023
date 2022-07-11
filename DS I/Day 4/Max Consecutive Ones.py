class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        sumi=0;
        maxi=0;
        for i in range(len(nums)):
            if nums[i]==1:
                sumi=sumi+1 
            elif nums[i]==0:
                maxi=max(maxi,sumi)
                sumi=0
        maxi=max(maxi,sumi)
        return maxi
