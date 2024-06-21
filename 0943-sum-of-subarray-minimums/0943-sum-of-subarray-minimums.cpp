class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> psei(n, -1), nsei(n, n);
        stack<int> s1, s2;
        s1.push(0);
        for(int i = 1; i<n; i++){
            while(!s1.empty() && arr[i] < arr[s1.top()]){
                nsei[s1.top()] = i;
                s1.pop();
            }
            s1.push(i);
        }
        s2.push(n-1);
        for(int i = n-2; i>=0; i--){
            while(!s2.empty() && arr[i] <= arr[s2.top()]){
                psei[s2.top()] = i;
                s2.pop();
            }
            s2.push(i);
        }
        for(int i=0; i<n; i++){
            cout<<"{"<<psei[i]<<" "<<nsei[i]<<"}"<<endl;
        }
        int sum = 0, mod = 1e9 +7;
        for(int i = 0; i<n; i++){
            // try
                sum = (sum + (static_cast<long long>(arr[i]) * (i - psei[i]) * (nsei[i] - i))) % mod;

            // catch(exception e){

            // }
        }
        return sum;
    }
};