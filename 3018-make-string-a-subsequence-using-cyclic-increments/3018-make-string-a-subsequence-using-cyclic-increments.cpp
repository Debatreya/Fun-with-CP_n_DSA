class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0, n1 = str1.length(), n2 = str2.length();
        while(i<n1)
        {
            if(str1[i] == str2[j] or str1[i] == (str2[j] == 'a' ? 'z' : str2[j]-1))
            {
                i++;
                j++;
            }
            else
                i++;
            if(j>=n2)
                return true;
        }
        if(j>=n2)
            return true;
        return false;
    }
};