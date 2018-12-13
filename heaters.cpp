class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int dist = 0;
        int j = 0;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        houses.erase( unique( houses.begin(), houses.end() ), houses.end() );
        heaters.erase( unique( heaters.begin(), heaters.end() ), heaters.end() );
        for(int i = 0; i<houses.size(); i++){
            while(j+1 < heaters.size() && abs( houses[i] - heaters[j+1] ) < abs( houses[i] - heaters[j])){
                j++;
            }
            if(dist <= abs( houses[i] - heaters[j] )){
                dist = abs( houses[i] - heaters[j] );
            }
        }
        return (dist);

    }
};
