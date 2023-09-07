class Solution {
public:
    string removeDuplicates(string s) {
        vector<char> v;
        int top=-1;
        for(int i = 0; i<s.length(); i++)
        {
            if(v.size()>=1 and v[top] == s[i])
            {
                v.pop_back();
                top--;
            }
            else{
                v.push_back(s[i]);
                top++;
            }
        }
        string str(v.begin(), v.end());//converting the final vector of characters to a string
        return str;
    }
};