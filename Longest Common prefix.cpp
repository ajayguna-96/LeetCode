class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j,k;
        if(strs.size() == 0) return "";
        string comp = strs[0];
        int index = strs[1].length();
        for(i = 1; i<strs.size();i++){

            for(j = 0 , k = 0 ; j < index  && k < comp.length(); j++,k++ ){
                if( strs[i][j] != comp[k]){
                    cout<<strs[i][j];
                    index = j;
                    break;
                }
            }
            comp.resize(index);
            cout<<comp<<endl;
        }
        return comp;

    }
};
