class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        temp=[0]*len(nums)
        for i in range(0,len(nums)):
            temp[i]=nums[(len(nums)-k+i)%len(nums)]
        for i in range(0,len(nums)):
            nums[i]=temp[i]
        return nums
