class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();

        int c0 = 1;

    // Traverse the arr and mark first 
    // cell of each row and column
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {

                // mark i-th row
                   matrix[i][0] = 0;

                // mark j-th column
                    if (j == 0)
                        c0 = 0;
                    else
                        matrix[0][j] = 0;
                }
            }
        }

    // Traverse and mark the matrix from 
    // (1, 1) to (n - 1, m - 1)
        for (int i = 1; i < n; i++) {
             for (int j = 1; j < m; j++) {

            // Check for col & row
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

    // Mark the first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++)
                matrix[0][j] = 0;
        }
  
    // Mark the first column
        if (c0 == 0) {
            for (int i = 0; i < n; i++)
                matrix[i][0] = 0;
        }
    }
};