class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]<target)
                    count++;
                else
                    break;
            }
            if(target>=0 && nums[i]>=target)
                break;
        }
        return count;
    }
};