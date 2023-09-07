class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i = 0; i < numRows; i++)
        {
            vector<int> m;
            for(int j = 0; j<=i; j++)
            {
                if(i==j || j==0)
                {
                    m.push_back(1);
                }
                else
                {
                    m.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(m);
        }
        return v;
    }
};