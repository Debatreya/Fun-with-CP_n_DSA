#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> constructLowerArray(vector<ll>& arr) {
        vector<ll> ans, temp;
        ll n = arr.size();
        for (ll i = n - 1; i >= 0; i--) {
            ll c = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
            ans.push_back(c);
            temp.insert(temp.begin() + c, arr[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll, ll>> v;
    for(ll i = 0; i<n; i++){
        pair<ll, ll> p;
        cin>>p.first>>p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    vector<ll> finish;
    for(ll i = 0; i<n; i++){
        finish.push_back(v[i].second);
    }
    vector<ll> sfinish = constructLowerArray(finish);
    long long sum = 0;
    for(ll i = 0; i<n; i++){
        // ll level = v[i].second;
        // ll count = 0;
        // for(ll j = i+1; j<n; j++){
        //     if(v[j].second <= level){
        //         count++;
        //     }
        // }
        // sum+=count;
        // cout<<sfinish[i]<<" ";
        sum+=sfinish[i];
    }
    cout<<sum<<endl;
}
int main(){
    ll t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}