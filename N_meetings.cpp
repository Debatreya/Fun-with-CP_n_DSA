#include<bits/stdc++.h>
using namespace std;
class Solution{
    static bool comp(pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    }
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> activity(n);
        for(int i = 0; i<n; i++){
            activity[i].first = start[i];
            activity[i].second = end[i];
        }
        sort(activity.begin(), activity.end(), comp);
        int count = 1;
        int end_time = activity[0].second;
        for(int i = 1; i<n; i++){
            if(activity[i].first > end_time){
                
                count++;
                end_time = activity[i].second;
            }
        }
        return count;
    }
};

int main()
{
    int n;
    cin>>n;
    int start[n], end[n];
    for(int i = 0; i<n; i++){
        cin>>start[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>end[i];
    }
    Solution obj;
    int ans = obj.maxMeetings(start, end, n);
    cout<<ans<<endl;
    return 0;
}
