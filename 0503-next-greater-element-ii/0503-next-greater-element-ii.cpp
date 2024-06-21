class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        nums.insert( nums.end(), nums.begin(), nums.end() );
        int n = nums.size();
        vector<int> v(n, -1);
        stack<int> st; // for indices
        st.push(0);
        for(int i = 1; i<n; i++){
            while(!st.empty() and nums[i] > nums[st.top()]){
                v[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        v.erase(v.begin()+n/2, v.end());
        return v;
    }
};