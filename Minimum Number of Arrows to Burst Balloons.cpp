class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        if( points.size() < 1){
            return 0;
        }
        int count = 0;
        int i = 0;
        int right;
        sort( points.begin() , points.end());
        while( i < points.size()){
            right = points[i].second;
            while( ++i < points.size() && right >= points[i].first){
                right = min( right , points[i].second);
            }
            count++;
        }
     return count;
    }
};
