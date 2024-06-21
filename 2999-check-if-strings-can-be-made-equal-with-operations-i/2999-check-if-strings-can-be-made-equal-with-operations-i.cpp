class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1 == s2)
            return true;
        string s3 = s2;
        s3[0] = s2[2];
        s3[2] = s2[0];
        if(s3 == s1)
            return true;
        s3 = s2;
        s3[1] = s2[3];
        s3[3] = s2[1];
        if(s3 == s1)
            return true;
        s3[0] = s2[2];
        s3[2] = s2[0];
        if(s3 == s1)
            return true;
        return false;        
    }
};