class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s_0 = 0, s_1 = 0, s_2 = 0, i;
        for(i = 0; i<nums.size(); i++)
            if(nums[i] == 0)
                s_0++;
            else if(nums[i] == 1)
                s_1++;
            else
                s_2++;
        i = 0;
        while(s_0--)
            nums[i++]=0;
        while(s_1--)
            nums[i++]=1;
        while(s_2--)
            nums[i++]=2;
    }
};