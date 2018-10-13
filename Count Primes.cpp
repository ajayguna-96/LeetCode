class Solution {
public:
    int countPrimes(int n) {
        int i,j,flag;
        int count = 0;
        for(i=2;i<n;i++)
        {
            flag = 0;
            for(j=2;j*j<=i;j++)
            {
                if(i%j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                count++;
            }
        }
        return count;
    }
};
