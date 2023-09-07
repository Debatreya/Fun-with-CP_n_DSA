class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i=0; i<=n; i++)
        {
            if(nums[i]==0 && i!=n)
            {
                int j, flag = 0;
                for(j=0; j<i; j++)
                {
                    if(nums[j]<=i-j)
                    {
                        flag++;
                    }
                    else{
                        break;
                    }
                }
                if(flag==i)
                {
                    return false;
                }
            }
        }
        return true;
    }
};