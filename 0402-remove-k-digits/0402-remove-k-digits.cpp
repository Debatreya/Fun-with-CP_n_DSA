class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==0)
            return num;
        stack<char> st;
        st.push(num[0]);
        int i = 1;
        for(int i = 1; i<num.length(); i++){
            while(k>0 and !st.empty() and num[i] < st.top()){
                k--;
                st.pop();
            }
            st.push(num[i]);
            if(st.size() == 1 and num[i] == '0'){
                st.pop();
            }
        }
        while(k && !st.empty()){
            k--;
            st.pop();
        }
        string s;
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s.size() != 0 ? s : "0";
    }
};