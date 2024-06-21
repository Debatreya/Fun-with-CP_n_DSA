class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int ans = INT_MIN;
        st.push(0);
        for(int i = 1; i<n; i++){
            while(!st.empty() and heights[i] < heights[st.top()]){
                int el = heights[st.top()]; //Current bar
                st.pop();
                int nsi = i;
                int psi = (st.empty()) ? -1 : st.top();
                ans = max(ans, el*(nsi-psi-1));
            }
            st.push(i);
        }
        // remaing elements in loop after loop
        while(!st.empty()){
            int el = heights[st.top()]; //Current bar
            st.pop();
            int nsi = n;
            int psi = (st.empty()) ? -1 : st.top();
            ans = max(ans, el*(nsi-psi-1));
        }
        return ans;
    }
};