class Solution:
    def setZeroes(self, mat: List[List[int]]) -> None:
        n=len(mat)
        m=len(mat[0])
        row=[0]*n
        col=[0]*m
        for i in range(n):
            for j in range(m):
                if mat[i][j]==0:
                    row[i]=1
                    col[j]=1
        for i in range(n):
            for j in range(m):
                if row[i]==1 or col[j]==1:
                    mat[i][j]=0