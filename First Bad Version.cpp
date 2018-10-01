// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1, x;
        int temp=n;
        if (n == 0) return 0;
        if (n == 1) return 1;
        while(i <= n)
        {
            x=i+(n-i)/2;
            if(isBadVersion(x) == 1)
            {
                if( x - 1 > 0 && isBadVersion(x - 1) == 0 || x - 1 == 0)
                {
                    return x;
                }
                n = x;
            }
            else
            {
                i = x+1;
            }
        }
        return temp;
    }
};
