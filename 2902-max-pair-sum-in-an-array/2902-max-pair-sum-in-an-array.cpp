class Solution {
private:
    static int maxDigit(int a)
    {
        int maxd = 0;
        while(a)
        {
            int d = a%10;
            maxd = max(maxd, d);
            a/=10;
        }
        return maxd;
    }
public:
    static bool comp(int a, int b)
    {
        if(maxDigit(a) == maxDigit(b))
            return a>b;
        return (maxDigit(a) > maxDigit(b));
    }
    int maxSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        int i = 0, j = 1, sum = -1;
        while(j<nums.size())
        {
            if(maxDigit(nums[i]) == maxDigit(nums[j]))
            {
                sum = max(sum, nums[i]+nums[j]);
                i+=2;
                j+=2;
            }
            else{
            i++;
            j++;
            }
        }
        return sum;
    }
};