class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i;
        vector <int> even;
        vector <int> odd;
        for (i=0;i<A.size();i++){
            if(A[i]%2 == 0)
            {
                even.push_back(A[i]);
            }
            else
            {
                odd.push_back(A[i]);
            }
        }
        even.insert( even.end(), odd.begin(), odd.end() );
        return even;
    }
};
