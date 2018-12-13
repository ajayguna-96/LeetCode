class Solution {
public:
    void print(vector<int> nums){
        for(int i = 0; i < nums.size() ; i++){
                cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[abs(nums[i]) - 1 ] >= 0){
                nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
            }
            else{
                //cout<<abs(nums[i]);
                result.push_back(abs(nums[i]));
            }
           // print(nums);
        }
        cout<<"done";
        //print(result);
        return result;
    }
};
