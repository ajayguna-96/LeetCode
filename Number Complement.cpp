class Solution {
public:
    int findComplement(int num) {
        if(num < 0 ){
            return NULL;
        }
        if(num == 1){
            return 0;
        }
        int res = 0;
        int bit = 0;
        int i = 0;
        while(num>0){
            bit = num%2;
            if(bit == 0){
                res = res + pow(2,i);
            }
            num = num/2;
            i++;
        }
        return res;

    }
};
