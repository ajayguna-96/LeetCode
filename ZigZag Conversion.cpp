class Solution {
public:
    string convert(string s, int numRows) {
        int size = s.length();
        cout<<size;
        int i,j = 0;
        int flag = 0;
        if ( numRows == 1 ) return s;
        vector<vector<char> > str(numRows);
        for(i=0;i<size;i++)
        {
            if(j == numRows-1) flag = 1;
            if(j == 0) flag = 0;
            if(flag == 0)
            {
                str[j].push_back(s[i]);
                j++;
            }
            else
            {
                str[j].push_back(s[i]);
                j--;
            }
        }

        vector<char> ret;
        for(i=0;i<numRows;i++)
        {
            copy( str[i].begin(), str[i].end(), back_inserter(ret));
        }
        string res(ret.begin(), ret.end());
        return res;
    }
};
