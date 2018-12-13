class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> C_index;
        vector<int> dist(S.length(),INT_MAX);
        for(int i = 0;i<S.length();i++){
            if(S[i] == C){
                C_index.push_back(i);
            }
        }
        for(int i = 0; i<S.length(); i++){
            for(int j = 0; j<C_index.size() ;j++){
                if(dist[i] >= abs(i-C_index[j])){
                    dist[i] = abs(i-C_index[j]);
                }
            }
        }
        return dist;

    }
};
