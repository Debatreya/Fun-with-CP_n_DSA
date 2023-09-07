class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int i=0, j=1, maxsum=0;
        while(j<nums.size())
        {
            maxsum = max(maxsum, nums[j]+nums[i]);
            j++;
            i++;
        }
        if(nums.size()<=2)
            return true;
        if(maxsum >= m)
            return true;
        else
            return false;
    }
};