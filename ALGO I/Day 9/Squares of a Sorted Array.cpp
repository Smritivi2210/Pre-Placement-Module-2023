class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        a=[]
        for i in range(0,len(nums)):
            a.append(nums[i]*nums[i])
        a.sort()
        return a
        
