class Solution {
public:
    int binarySearch(vector<int> arr, int l,int r){
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }
            if(arr[mid] > arr[mid+1]){
                return binarySearch(arr,0,mid-1);
            }
            else{
                return binarySearch(arr,mid+1,r);
            }

        }
        return -1;
    }
    int peakIndexInMountainArray(vector<int>& A) {
        return binarySearch(A, 0, A.size()-1);
    }
};
