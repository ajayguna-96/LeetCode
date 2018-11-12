class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp = ;
        vector<int> zeros;
        for (int num : nums) {
            if (num != 0) {
                temp.push_back(num);
            } else {
                zeros.push_back(num);
            }
        }
        temp.insert(temp.end(),zeros.begin(),zeros.end());
        nums = temp;
    }
};
