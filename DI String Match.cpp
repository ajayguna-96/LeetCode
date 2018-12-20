class Solution {
public:
    vector<int> diStringMatch(string S) {
        int start = 0;
        int end = S.length();
        int i = 0;
        vector<int> result;
        while( i <= S.length()){
            if(S[i] == 'I'){
                result.push_back(start++);
            }
            else{
                result.push_back(end--);
            }
            i++;
        }
        return result;
    }
};
