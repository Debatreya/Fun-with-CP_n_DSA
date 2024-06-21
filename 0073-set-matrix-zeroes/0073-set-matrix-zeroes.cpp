class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        set<int> row0, col0;
        for(int i = 0; i<row; i++)
            for(int j = 0; j<col; j++)
                if(matrix[i][j]==0){
                    row0.insert(i);
                    col0.insert(j);
                }
        for(const auto &i: row0)
        {
            for(int j=0; j<col; j++)
            {
                matrix[i][j] = 0;
            }
        }
        for(const auto &i: col0)
        {
            for(int j=0; j<row; j++)
            {
                matrix[j][i] = 0;
            }
        }
    }
};