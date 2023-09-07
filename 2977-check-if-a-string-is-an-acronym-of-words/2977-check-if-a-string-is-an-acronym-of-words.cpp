class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string check = "";
        for(int i = 0; i<words.size(); i++)
        {
            check+=words[i][0];
        }
        if(check == s)
            return true;
        return false;
    }
};