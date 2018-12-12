class Solution {
public:
    string reverseString(string s) {
        if(s.length()<1){
            return s;
        }
        int start = 0;
        int end = s.length()-1;
        for( ;start < end; start++,end--){
            char temp = s[end];
            s[end] = s[start];
            s[start] = temp;
        }
        return s;
    }
};
