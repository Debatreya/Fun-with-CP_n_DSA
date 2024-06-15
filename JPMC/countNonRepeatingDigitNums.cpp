// Given a range [L, R], find the count of numbers having non-repeating digits.
#include<bits/stdc++.h>
#define ll long long

using namespace std;


int solve(int l, int r){
    int count = 0;
    for(int i = l; i <= r; i++){
        int num = i;
        vector<int> freq(10, 0);
        bool flag = true;
        while(num > 0){
            int digit = num % 10;
            freq[digit]++;
            if(freq[digit] > 1){
                flag = false;
                break;
            }
            num /= 10;
        }
        if(flag){
            count++;
        }
    }
    return count;
}

void countNumbers(vector<vector<int>> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<solve(arr[i][0], arr[i][1])<<endl;
    }
}

int main(){
    int t, n;
    cin>>t>>n;
    vector<vector<int>> arr(t, vector<int>(n));
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    countNumbers(arr);
    return 0;
}