class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int i,j;
        vector<string> res;
        for(i=0;i<words.size();i++){
            unordered_map<char,char> map;
            unordered_map<char,char> maprev;
            int flag = 0;
            for(j=0;j<words[i].length();j++)
            {
                if(map[pattern[j]] == false && maprev[words[i][j]] == false  || map[pattern[j]]==words[i][j] && maprev[words[i][j]]==pattern[j]){
                    cout<<"hey";
                    map[pattern[j]] = words[i][j];
                    maprev[words[i][j]] = pattern[j];
                }
                else
                {
                    flag =1;
                }
            }
            if(flag==0){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};
