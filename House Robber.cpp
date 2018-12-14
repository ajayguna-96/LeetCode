class Solution {
public:
    int max (int a, int b){
        if(a > b){
            return a;
        }
        return b;
    }
    int rob(vector<int>& nums) {
        if( nums.size() < 1) return 0;
        vector<int> dp(nums.size(),0);
        int i = 0;

        while(i < nums.size()){
            if( i == 0){
                dp[i] = nums[i];
            }
            else if( i == 1){
                dp[i] = max(nums[0],nums[1]);
            }
            else{
                dp[i] = max( dp[i-1] , dp[i-2] +nums[i]);
            }
            i++;
        }
        return dp[nums.size()-1];
    }
};
