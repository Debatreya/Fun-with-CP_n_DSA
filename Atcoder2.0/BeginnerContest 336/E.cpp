#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll calculateDigitSum(ll number) {
    ll digitSum = 0;

    // Take the absolute value of the number to handle negative input
    number = abs(number);

    while (number > 0) {
        digitSum += number % 10;
        number /= 10;
    }

    return digitSum;
}
void solve(){
    ll n;
    cin>>n;
    if(n<=10){
        cout<<n;
        return;
    }
    if(n==11){
        cout<<10;
        return;
    }
    ll ans = 10;
    for(ll i = 12; i<=n; i++){
        ll dsum = calculateDigitSum(i);
        if(i%dsum == 0){
            ans++;
        }
    }
    cout<<ans;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}