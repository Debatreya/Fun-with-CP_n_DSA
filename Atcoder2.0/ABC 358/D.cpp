#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin>>n>>m;
    
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    if(n < m){
        cout<<-1<<endl;
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long int price = 0;
    int j = 0;
    for(int i = 0; i < m; i++){
        while(j < n and a[j] < b[i]){
            j++;
        }
        if(j == n and i < m-1){
            cout<<-1<<endl;
            return;
        }
        if(j == n and i == m-1 and a[j-1] < b[i]){
            cout<<-1<<endl;
            return;
        }
        if(a[j] >= b[i]){
            price += a[j];
            j++;
        }
    }
    cout<<price<<endl;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}