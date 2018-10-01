class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int flag=0;
        int flag1=0;
        if(nums.size()==1) return 1;
        int check = -1;
        int count = 0;
        vector<int> temp = nums;
        for(int i = 0; i < nums.size()-1 ; i++)
        {
            if(nums[i] > nums[i+1])
            {
                if(check == -1)
                    check = i;
                count++;
            }
        }
        cout<<check;
        if(count==0) return 1;
        if(count==1)
        {
            nums[check] = nums[check+1];
            temp[check+1] = temp[check];
            for(int i = 0; i < nums.size()-1 ; i++)
            {
                if(nums[i] > nums[i+1])
                {
                    flag=1;
                }
                if(temp[i] > temp[i+1])
                {
                    flag1=1;
                }
            }
            if(flag1==0 || flag==0 )
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;

    }
};
