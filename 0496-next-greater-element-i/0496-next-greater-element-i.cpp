class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i = 0; i < nums1.size(); i++)
        {
            v.push_back(max(nums2, index(nums2, nums1[i]), nums1[i]));
        }
        return v;
    }
    int index(vector<int>& nums2, int data)
    {
        int i = 0;
        for(i = 0; i < nums2.size(); i++)
            if(nums2[i] == data)
                break;
        return i;
    }
    int max(vector<int>& nums2, int idx, int data)
    {
        for(int i = idx+1; i < nums2.size(); i++)
        {
            if(nums2[i] > data)
                return nums2[i];
        }
        return -1;
    }
};