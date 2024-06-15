#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> &a, vector<int> &b){
    return a.back() > b.back();
}

void solve(){
    int n, m;
    cin >> n >> m; // Correctly reading the input values for n and m

    vector<vector<int>> mat(n, vector<int>(m + 1));
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            if (ch == 'o') {
                mat[i][j] = 'o'; // Store as int representation of 'o'
                count++;
            } else {
                mat[i][j] = ch; // Store as int representation of character
            }
        }
        mat[i][m] = count;
    }
    sort(mat.begin(), mat.end(), comp);

    // Check minmimum number of rows required so that all m 'o's are covered
    vector<pair<int, int>> v;
    vector<int> covered(m, 0);
    for (int i = 0; i < n; i++) {
        int changes = 0;
        for(int j = 0; j<m; j++){
            if(mat[i][j] == 'o' && covered[j] == 0){
                covered[j] = 1;
                changes++;
            }
        }
        if(changes > 0){
            if(v.size() > 0 and v[v.size() - 1].second < changes){
                v.pop_back();
            }
            v.push_back({i, changes});
        }
        if(accumulate(covered.begin(), covered.end(), 0) == m){
            break;
        }
    }
    cout<<v.size()<<endl;
}

int main(){
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}