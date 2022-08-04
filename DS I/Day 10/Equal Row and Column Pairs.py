class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        m=len(grid[0])
        i=0
        c=0
        transpose_matrix=[]
        while(i<m):
            matrix_container=[]
            for j in range(len(grid)):
                matrix_container.append(grid[j][i])
            transpose_matrix.append(matrix_container)
            i=i+1

        for i in grid:
            if i in transpose_matrix:
         
                c+=transpose_matrix.count(i)
        return c
            
                
                
