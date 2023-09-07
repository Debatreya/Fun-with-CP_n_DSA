class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> grid(3, vector<char>(3, ' '));
        for(int i=0; i < moves.size(); i++)
        {
            if(i%2 == 0)
                grid[moves[i][0]][moves[i][1]] = 'X';
            else
                grid[moves[i][0]][moves[i][1]] = '0';
        }
        bool ifPending = false;
        // row wise
        for(int i = 0; i<3; i++)
        {
            if(grid[i][0] == ' ' or grid[i][1] == ' ' or grid[i][2] == ' ')
                ifPending = true;
            if(grid[i][0] == 'X' and grid[i][1] == 'X' and grid[i][2] == 'X')
                return "A";
            if(grid[i][0] == '0' and grid[i][1] == '0' and grid[i][2] == '0')
                return "B";
        }
        // col wise
        for(int i = 0; i<3; i++)
        {
            if(grid[0][i] == 'X' and grid[1][i] == 'X' and grid[2][i] == 'X')
                return "A";
            if(grid[0][i] == '0' and grid[1][i] == '0' and grid[2][i] == '0')
                return "B";
        }
        // diagonal wise
        if(grid[1][1] == 'X' and ((grid[0][0] == 'X' and grid[2][2] == 'X') or (grid[0][2] == 'X' and grid[2][0] == 'X')))
            return "A";
        if(grid[1][1] == '0' and ((grid[0][0] == '0' and grid[2][2] == '0') or (grid[0][2] == '0' and grid[2][0] == '0')))
            return "B";
        if(ifPending)
            return "Pending";
        else 
            return "Draw";
    }
};