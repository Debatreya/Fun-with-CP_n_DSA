class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        vector<int> v(nums.size(), -1);
        stack<int> st_0, st_1;
        // queue<int> st_1;
        st_0.push(0);
        for(int i = 1; i<nums.size(); i++)
        {
            while(!st_1.empty() and nums[i]>nums[st_1.top()])
            {
                v[st_1.top()] = nums[i];
                st_1.pop();
            }
            stack<int> temp;
            while(!st_0.empty() and nums[i]>nums[st_0.top()])
            {
                temp.push(st_0.top());
                st_0.pop();
            }
            while(!temp.empty())
            {
                st_1.push(temp.top());
                temp.pop();
            }
            st_0.push(i);
        }
        return v;
    }
};