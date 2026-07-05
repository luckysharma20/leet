class Solution {
public:
    
    bool issafe(vector<vector<char>> &mat,int row,int col,char num){
        for (int i=0;i<=8;i++){
            if(mat[row][i]==num) return false;
        }
        for(int i=0;i<=8;i++){
            if(mat[i][col]==num) return false;
        }
        int startrow=row-(row%3);
        int startcol=col-(col%3);
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if(mat[i+startrow][j+startcol]==num) return false;
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>> &mat,int row,int col){
        int n=mat.size();
        if(row==n) return true;
        if(col==n){
            return solve(mat,row+1,0);
        }
        if(mat[row][col]!='.'){
            return solve(mat,row,col+1);
        }
        for (char i='1';i<='9';i++){
            if(issafe(mat,row,col,i)){
                mat[row][col]=i;
                if(solve(mat,row,col+1)) return true;
                mat[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};