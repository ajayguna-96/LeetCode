class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i;
        int count = 0;
        int size = flowerbed.size();
        if(size<n) return false;
        if(size == 1){
            if(flowerbed[0] == 0) return true;
        }
        for(i=0;i<size;i++){
            if((i-1>0 && i+1<size && flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0 ) || (i-1 == -1 && i+1<size && flowerbed[i] == 0 && flowerbed[i+1] == 0 ) ||(i-1>0 && i+1 == size && flowerbed[i-1] == 0 && flowerbed[i] == 0)){
                count++;
                cout<<"ha"<<endl;
                flowerbed[i] = 1;
            }
        }
        for(i=0;i<size;i++){
            cout<<flowerbed[i];
        }
        if(n<=count){

            return true;
        }
        return false;
    }
};
