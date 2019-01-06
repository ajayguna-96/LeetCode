class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> map;
        int i = 0;
        while( i < A.size()){
            if( map.find(A[i]) == map.end()){
                map[A[i]] = 1;
            }
            else{
                return A[i];
            }
            i++;
        }
        return -1;

    }
};
