class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i,j;
        int size = nums.size();
        unordered_map<int,int> check;
        if (size == 0) return false;
        for(i=0;i<size;i++)
        {
            if(check.find(nums[i])==check.end()){
                check[nums[i]] = i;
            }
            else{
                if(abs(check[nums[i]]-i)<=k)
                    return true;
                else
                    check[nums[i]] = i;

            }

        }
        return false;
    }
};
