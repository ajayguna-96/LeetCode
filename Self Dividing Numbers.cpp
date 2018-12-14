class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left ; i <= right ; i++){
            if( i <= 9){
                res.push_back(i);
            }
            else if( i % 10 == 0){
            }
            else{
                int temp = i;
                bool flag = 0;
                int rem = 0;
                while(temp>0){
                    rem = temp % 10;
                    if(rem == 0){
                        flag = 1;
                        break;
                    }
                    if(i % rem != 0){
                        flag = 1;
                        break;
                    }
                    temp = temp/10;
                }
                if( flag == 0){
                    res.push_back(i);
                }
            }
        }
        return res;

    }
};
