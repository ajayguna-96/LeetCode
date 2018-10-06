class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int flag1,flag2;
        while(x>0 || y>0){
            flag1 = x%2;
            x=x/2;
            cout<<"x"<<x;
            flag2 = y%2;
            y=y/2;
            cout<<"y"<<y;
            if(flag1 != flag2){
                count++;
            }
        }
        return count;
    }
};
