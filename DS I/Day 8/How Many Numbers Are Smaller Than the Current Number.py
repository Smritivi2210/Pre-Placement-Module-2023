class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        l=[]
        s=sorted(nums)
        for i in range(0,len(nums)):
            f=s.index(nums[i])
            l.append(f)
        return l
            
