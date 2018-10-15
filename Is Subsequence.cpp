class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size1 = t.length();
        int size2 = s.length();
        if(size1 == 0 && size2 == 0){
            return true;
        }
        if(size1<size2)
            return false;
        int i = 0;
        int j = 0;
        while(i<size1 && j<size2){
            if(s[j] == t[i]){
                j++;
            }
            i++;
        }
        if(j == size2){
            return true;
        }
        return false;

    }
};
