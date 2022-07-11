class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in range(len(matrix)):
            p=max(matrix[i])
            d=min(matrix[i])
            if target==d or target==p:
                return True
            if target>d and target<p:
                for j in range(0,len(matrix[0])):
                    if target==matrix[i][j]:
                        return True 
        return False
