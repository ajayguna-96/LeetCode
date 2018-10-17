class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        if (size==0) return -1;
        if (target==nums[0]) return 0;
        if (target>nums[0])
        {
            int i,max=nums[0];
            for(i=1;target>=nums[i];i++)
            {
                if(target== nums[i]) return i;
                if(max>nums[i]) return -1;
                else
                    max=nums[i];
            }
        }
        else{
            if (target==nums[size-1]) return size-1;
            int i,min=nums[size-1];
            for(i=size-2;target<=nums[i];i--)
            {
                if(target== nums[i]) return i;
                if(min<nums[i]) return -1;
                else
                    min=nums[i];
            }
        }
        return -1;
    }
};
