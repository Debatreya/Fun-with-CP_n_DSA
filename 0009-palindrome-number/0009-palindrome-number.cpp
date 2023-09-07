class Solution {
public:
    bool isPalindrome(int x) 
    {
        long int rev=0, rem, n=x;
        while(n>0)
        {
            rem = n%10;
            n/=10;
            rev = rev*10+rem;
        } 
        if(x<0)
        {
            return false;
        }
        else if(x==rev)
        {
            return true;
        }
        return false;
    }
};