class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map_s;
        unordered_map<char,char> map_t;
        if(s.length() != t.length()){
            return 0;
        }
        for(int i = 0;i<t.length(); i++){
            if(map_s.find(s[i]) != map_s.end() || map_t.find(t[i]) != map_t.end()){
                if(map_s[s[i]] != t[i] && map_t[t[i]] != s[i]){
                    return 0;
                }
            }
            else{
                map_t[t[i]] = s[i];
                map_s[s[i]] = t[i];
            }
        }
        cout<<" "<<map_t['b'];
        return 1;
    }
};
