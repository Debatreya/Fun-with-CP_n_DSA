class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();
        string s3, s4;
        for(int i = 0; i<n; i++){
            if(i%2 == 0)
            {
                s3 += s1[i];
                s4 += s2[i];
            }
        }
        sort(s3.begin(), s3.end());
        sort(s4.begin(), s4.end());
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s3 == s4  && s1 == s2)
            return true;
        return false;
    }
};