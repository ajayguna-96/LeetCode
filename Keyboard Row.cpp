class Solution {
public:
    int FindRow (char letter , vector<string> dict){
        for(int i = 0; i < dict.size() ; i++){
            for( int j = 0 ; j < dict[i].length() ; j++){
                if( tolower(letter) == dict[i][j]){
                    return i + 1;
                }
            }
        }
        return -1;

    }
    vector<string> findWords(vector<string>& words) {
        vector<string> dict = {"qwertyuiop" , "asdfghjkl" ,"zxcvbnm"};
        int num = -1;
        int it = -1;
        vector<string> res;
        for(int i = 0 ; i < words.size() ; i++){
            num = FindRow( words[i][0] , dict );
            for(int j = 1 ; j < words[i].length() ; j++){
                it = FindRow( words[i][j] , dict );
                if(num != it){
                    break;
                }
            }
            if(num == it || it == -1){
                res.push_back(words[i]);
            }
            it = -1;
        }
        return res;
    }
};
