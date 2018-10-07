class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i,check;
        int count = 0;
        if(nums.size() <= 1) return 0;
        unordered_map<int,int> map;
        for(i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto it = map.begin(); it != map.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;

            if(k>0){
                check = it->first + k;
                if(map.find(check)!=map.end())
                {
                    count++;
                }
            }
            else if(k==0){
                if(it->second > 1){
                    count = count + 1;
                }
            }
            else
                {
                    return 0;
                }
        }

        return count;
    }
};
