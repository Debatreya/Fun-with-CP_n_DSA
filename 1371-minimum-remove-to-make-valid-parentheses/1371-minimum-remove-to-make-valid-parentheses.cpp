class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> index;
        int i = 0;
        while(i<s.length())
        {
            if(s[i]=='(')
            {
                s[i] = '0';
                index.push(i);
            }
            else if(index.empty() and s[i] == ')')
                s[i] = '0';
            else if(!index.empty() and s[i] == ')')
            {
                s[index.top()] = '(';
                index.pop();
            }
            i++;
        }
        string ansstr;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] != '0')
                ansstr+=s[i];
        }
        return ansstr;
    }
};