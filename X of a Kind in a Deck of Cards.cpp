class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> map;
        int i;
        int size = deck.size();
        if(size < 2) return false;
        for(i = 0; i<size; i++){
            map[deck[i]]++;
        }
        i = 0;
        for(auto it = map.begin(); it!=map.end(); it++){
            i = __gcd(it->second,i);
        }
        return i>1;

    }
};
