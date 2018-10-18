class Solution {
public:
    int trailingZeroes(int n) {
        int i = 1;
        int count = 0;
        while(n>0){
            n = n/pow(5,i);
            count = count + n;
       }
        return count;
    }
};
