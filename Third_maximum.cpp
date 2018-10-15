class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> s( nums.begin(), nums.end() );
        nums.assign( s.begin(), s.end() );
        int size = nums.size();
        int max1 = nums[0];
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        int flag = 0;
        if(size == 0) return 0;
        for(int i = 1; i<size ; i++){

            if(nums[i] == INT_MIN || max1 == INT_MIN){
                    flag = 1;
                }
            if(max1 < nums[i]){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] >= max2 && nums[i] < max1){
                max3 = max2;
                max2 = nums[i];
            }
            else{

                if(nums[i] >= max3 && nums[i] < max2){
                    max3 = nums[i];
                }
            }
            cout<<max1<<max2<<max3<<endl<<flag<<endl;
        }

        if((max3 == INT_MIN && flag == 0 )|| (max2 == max3))
        {
            return max1;
        }
        return max3;
    }
};
