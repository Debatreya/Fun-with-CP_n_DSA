class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int i = 0, j = nums.size()-1;
    while(i<j)
    {
        if((nums[i]&1) == 1 and (nums[j]&1) == 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        if((nums[i]&1) == 0)
            i++;
        if((nums[j]&1) == 1)
            j--;
    }
    return nums;
    }
};