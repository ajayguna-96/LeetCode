class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        vector<vector<int>> res(col, (vector<int> (row, 0)));
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                res[j][i] = A[i][j];
            }
        }
        return res;
    }
};
