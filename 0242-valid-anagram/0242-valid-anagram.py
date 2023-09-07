class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        dict_s = dict()
        for i in s:
            if i not in dict_s:
                dict_s[i] = 1
            else:
                dict_s[i]+=1
        dict_t = dict()
        for i in t:
            if i not in dict_t:
                dict_t[i] = 1
            else:
                dict_t[i]+=1
        for i in dict_s:
            if i not in dict_t:
                return False
            else:
                if dict_s[i] != dict_t[i]:
                    return False
        return True

