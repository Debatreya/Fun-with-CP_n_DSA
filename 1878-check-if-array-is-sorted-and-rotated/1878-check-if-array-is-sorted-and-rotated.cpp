class Solution {
public:
    bool check(vector<int>& nums) {
        int check = 0;
        int len = nums.size();
        for(int i=1; i<len; i++)
        {
            if(nums[i]<nums[i-1])
                check += 1;
        }
        if(check == 0 and nums[0]<=nums[len-1])
            return true;
        else if(check == len-1 and nums[0]>nums[len-1] and len>=3)
            return false;
        else if(check == 1 and nums[0]>=nums[len-1])
            return true;
        return false;
    }
};