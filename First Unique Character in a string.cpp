class Solution {
public:
    int firstUniqChar(string s) {
        int i;
        unordered_map<char,int> map;
        if(s.length() == 0) return -1;
        for(i = 0; i<s.length(); i++){
            if(map.find(s[i]) == map.end()){
                map[s[i]] = 1;
            }
            else{
                map[s[i]]++;
            }
        }
        for(i = 0; i<s.length(); i++){
            cout<<"ha";
            if(map[s[i]] == 1){
                return i;
            }
        }

        return -1;
    }
};
