class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int i;
        int j = 0;
        int count = 0;
        if(words.size() <= 1) return words.size();
        vector<string> mor = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string> morse;
        unordered_map<string,int> res;
        for(i=0;i<26;i++)
        {
            morse['a' + i] = mor[j];
            j++;
        }
        for(i=0;i<words.size();i++)
        {
            string temp = "";
            for(j=0;j<words[i].length();j++)
            {
               temp = temp+morse[words[i][j]];
            }
            cout<<temp<<endl;
            if(res[temp] != 1){
                res[temp] = 1;
                count++;
            }
        }
        return count;
    }
};
