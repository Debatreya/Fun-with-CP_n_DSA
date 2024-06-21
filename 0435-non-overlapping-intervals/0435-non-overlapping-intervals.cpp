class Solution {
private:
    static bool comp(vector<int> a, vector<int> b){
        return a[1]<b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        int count = 1;
        cout<<0<<" ";
        int last = intervals[0][1];
        for(int i = 1; i<intervals.size(); i++){
            if(intervals[i][0] >= last){
                cout<<i<<" ";
                last = intervals[i][1];
                count++;
            }
        }
        return intervals.size()-count;
    }
};