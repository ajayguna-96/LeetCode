// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int binarysearch(int start, int end){
        if(start<=end){
            int mid = start + (end - start)/ 2;
            if(guess(mid) == 0){
                return mid;
            }
            if(guess(mid)>0){
                return binarysearch(mid+1,end);
            }
            else{
                 return binarysearch(start,mid);
            }
        }
        return -1;
    }

    int guessNumber(int n) {
        //if (n==0)
        return binarysearch(0,n);


    }
};
