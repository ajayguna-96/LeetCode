class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        if(x<10) return 1;
        int temp = x;
        int res = 0;
        while(temp>0){
            res = (res*10) + (temp%10);
            temp = temp/10;
        }
        return(res == x);

    }
};
