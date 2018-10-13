class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int i;
        if(s.length() <= 1)  return true;
        vector<char> ns;
        for(i = 0;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<91)
            {
                ns.push_back(s[i] + 32);
            }
            if(s[i]>=97 && s[i]<123)
            {
                ns.push_back(s[i]);
            }
            if(s[i] == ' ')
            {
                continue;
            }
            if(s[i]>=48 && s[i]<58)
            {
                ns.push_back(s[i]);
            }
        }
        if(ns.size() <= 1 ) return true;
        int end = ns.size()-1;
        while(start<=end){
            if(ns[start]!=ns[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

};
