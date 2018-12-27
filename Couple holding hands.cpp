class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        unordered_map <int,int> row_map;
        for(int i = 0 ; i < row.size() ; i++){
            row_map[row[i]] = i;
        }
        int count = 0;
        for(int i = 0 ; i < row.size() ; i += 2){
            if( row[i] % 2 == 0 && (row[i] - row[i+1] != -1 )){
                int temp = row[i+1];
                int index = row_map[row[i]+1];
                row[i + 1] = row[index];
                row[index] = temp;
                row_map[row[i]+1] = i+1;
                row_map[temp] = index;
                count++;
            }
            else if ( row[i] % 2 != 0 && (row[i] - row[i+1] != 1 )){
                int index = row_map[row[i]-1];
                int temp = row[i+1];
                row[i + 1] = row[index];
                row[index] = temp;
                row_map[row[i]-1] = i+1;
                row_map[temp] = index;
                count++;
            }
        }
        return count;
    }
};
