#include <bits/stdc++.h>
using namespace std;
int getMinRooms(vector<vector<int>> meetingTimings) {
    int n = meetingTimings.size();
    vector<pair<int, int>> timings;
    for (int i = 0; i < n; i++) {
        timings.push_back({meetingTimings[i][0], 1});
        timings.push_back({meetingTimings[i][1], -1});
    }
    sort(timings.begin(), timings.end());
    int rooms = 0, maxRooms = 0;
    for (int i = 0; i < timings.size(); i++) {
        rooms += timings[i].second;
        maxRooms = max(maxRooms, rooms);
    }
    return maxRooms;
}
int main(){
    int n, t;
    cin>>n>>t;
    // t is always 2
    vector<vector<int>> meetingTimings(n, vector<int>(t));
    for(int i=0; i<n; i++){
        for(int j=0; j<t; j++){
            cin>>meetingTimings[i][j];
        }
    }
    cout<<getMinRooms(meetingTimings)<<endl;
    return 0;
}