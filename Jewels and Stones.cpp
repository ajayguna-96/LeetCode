class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i;
        int count = 0;
        if (J.length() == 0 || S.length() == 0) return 0;
        unordered_map<char,int> map;
        for(i=0;i<S.length();i++)
        {
            map[S[i]]++;
        }
        cout<<map['b'];
        for(i=0;i<J.length();i++)
        {
            count =  count + map[J[i]];
        }
        return count;
    }
};
