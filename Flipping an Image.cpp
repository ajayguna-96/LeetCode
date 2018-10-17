class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int i,j;
        if(A.size()==0) return A;
        for(i=0;i<A.size();i++){

            if(A[i].size()>=1){

                for(j=0;j<A[i].size();j++){
                    if(A[i][j] == 0){
                        A[i][j] = 1;
                    }
                    else{
                        A[i][j] = 0;
                    }
                }
            }
            std::reverse(A[i].begin(),A[i].end());
        }
        return A;

    }
};
