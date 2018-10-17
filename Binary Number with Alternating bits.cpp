class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> ar;
        if(n<=1) return true;
        while(n>0){
            ar.push_back(n%2);
            n = n/2;
        }if(ar.size() <= 1) return true;
        for(int i = 1; i<ar.size();i++){
            if(ar[i]==ar[i-1]){
                return false;
            }
        }
        return true;
    }
};
