class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i,t;
        int size = nums.size();
        if(k == 0 || size == 1 )
        {
            for (i = 0; i < size; i++) {
                cout << nums[i] << " ";
                return;
            }
        }
        for(i = 0;i<k;i++){
            t = nums.at(size-1);
            nums.pop_back();
            nums.insert(nums.begin() + 0, t);
            }
        for (i = 0; i < size; i++) {
            cout << nums[i] << " ";
        }
    }
};
