class Solution {
public:
    bool buddyStrings(string A, string B) {
        int flag = 1;
        if(A.size()==0 && B.size() != 0 || A.size()!=0 && B.size() == 0 ) return 0;
        if(A.size()!=B.size()) return 0;
        vector<int>check;
        unordered_map<char,int> map;
        int temp=0;
        int count = 0;
        int i;
        for(i = 0; i < A.size() ; i++)
        {
            if(A[i] != B[i])
            {
                check.push_back(i);
                count++;
            }
            else
            {
                map[A[i]]++;
            }
        }
        cout<<count;
        if(count==0){
            for(auto it = map.begin(); it!= map.end(); ++it)
            {
                if(it->second >= 2)
                    return 1;
            }
            return 0;
        }
        if(count==2)
        {
            temp = A[check[0]];
            A[check[0]] = A[check[1]];
            A[check[1]] = temp;
            for(int i = 0; i < A.size(); i++)
            {
                if(A[i] != B[i])
                {
                    flag = 0;
                }
            }
            if(flag == 1) return 1;
            else return 0;

        }
        else
            return 0;

    }
};
