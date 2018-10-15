class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i;
        int min_index = -1, max_index = -1;
        vector<int> set = nums;
        sort(nums.begin(), nums.end());
        for(i=0;i<nums.size();i++){
            if(set[i]!=nums[i]){
                min_index = i;
                break;
            }
        }
        for(i=nums.size()-1;i>=0;i--){
            if(set[i]!=nums[i]){
                max_index = i;
                break;
            }

        }
        cout<<min_index<<max_index;
        if(min_index==-1 && max_index==-1) return 0;
        return max_index-min_index+1;


    }
};
