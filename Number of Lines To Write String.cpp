class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int size = widths.size();
        int length = S.length();
        vector<int> res;
        int quantity = 0;
        int i = 0;
        int lines = 1;
        while( i < length ){
            int index = S[i] - 'a';
            quantity += widths[index];
            if (quantity <= 100){
                i++;
            }
            else{
                lines++;
                quantity = 0;
            }
        }
        res.push_back(lines);
        res.push_back(quantity);
        return res;
    }
};
