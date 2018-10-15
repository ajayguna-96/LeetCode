class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() < 1) return 0;
        int end = s.length()-1;
        int count = 0;
        while(s[end] == ' ') end = end-1;
        while(s[end] != ' ' && end>=0){
            count++;
            end--;
        }
        return count;
    }
};
