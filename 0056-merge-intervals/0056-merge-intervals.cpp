class Solution {
public:
    static bool comp(vector<int> a, vector<int> b)
    {
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), comp);
        ans.push_back(intervals[0]);
        int j = 0;
        for(int i=1; i<n; i++)
        {
            if(intervals[i][0] <= ans[j][1])
            {
                ans[j][1] = max(intervals[i][1], ans[j][1]);
            }
            else
            {
                ans.push_back(intervals[i]);
                j++;
            }
        }
        return ans;
    }
};