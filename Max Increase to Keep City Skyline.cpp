class Solution {
public:
    void print( vector<int> p){
        for(int i = 0 ; i < p.size() ; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> tb;
        vector<int> lr;
        int v_size = grid.size();
        int h_size = grid[0].size();
        int i,it;
        for(i = 0 ; i < h_size ; i++){
            it = 0;
            int min = grid[it][i];
            it++;
            while( it < v_size ){
                if( min < grid[it][i]){
                    min = grid[it][i];
                }
                it++;
            }
            tb.push_back(min);
        }
        for(i = 0 ; i < v_size ; i++){
            it = 0;
            int min = grid[i][it];
            it++;
            while( it < h_size ){
                if( min < grid[i][it]){
                    min = grid[i][it];
                }
                it++;
            }
            lr.push_back(min);
        }
        int cost = 0;
        for( i = 0 ; i < v_size ; i++){
            for(int j = 0 ; j < h_size ; j++){
                cost += abs(grid[i][j] - min( lr[i], tb[j]));
            }
        }
        return cost;
    }
};
