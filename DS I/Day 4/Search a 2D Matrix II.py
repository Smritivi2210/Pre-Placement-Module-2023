class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        r=len(matrix)
        j=len(matrix[0])-1
        i=0
        while(i<r and j>=0):
            if matrix[i][j]==target:
                return True
            elif target<matrix[i][j]:
                j-=1 
            else:
                i+=1 
        return False

        
        
