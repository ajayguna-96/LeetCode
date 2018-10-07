class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int i;
        int flag = 0;
        int max = nums[0];
        int index = 0;
        if(nums.size() <=1 ) return 0;
        for(i=1;i<nums.size();i++){
            if(max < nums[i])
            {
                max = nums[i];
                index = i;
            }
        }
        cout<<index;
        for(i=0; i<nums.size() ; i++){
            if(2*nums[i]>max && i != index)
            {
                 return -1;
            }
        }
        return index;

    }
};
