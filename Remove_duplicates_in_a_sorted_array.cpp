class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        int val = nums[0];
        int i,j=0;
        for(i=1;i<len;i++)
        {

            if(val==nums[i])
            {
                j++;
                if(j>=2)
                {
                nums.erase(nums.begin()+i);
                i--;
                len=len-1;
                }
            }
            else
            {
                val = nums[i];
                j=0;
            }
        }
        return len;

    }
};
