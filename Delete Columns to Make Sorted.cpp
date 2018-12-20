class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        string comp = A[0];
        vector<int> arr;
        for( int i = 1 ; i < A.size() ; i++ ){
            int j = 0;
            while( j < A[i].size()){
                if( comp[j] > A[i][j]){
                    arr.push_back(j);
                }
                j++;
            }
            comp = A[i];
        }
        sort( arr.begin(), arr.end());
        arr.erase(unique(arr.begin() , arr.end()), arr.end());
        return arr.size();
    }
};
