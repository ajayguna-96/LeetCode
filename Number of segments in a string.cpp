class Solution {
public:
    int countSegments(string s) {
        int i = 0;
        int old = 0;
        int count = 0;
        int size = s.length();
        cout<<s[0];
        if(size == 1){
           if(s[0] != ' '){
               return 1;
           }
        }
        if(!size) return 0;
        while(i<size){
            if(s[i] == ' ' || s[i] == '\t'){
                if((s[old] != s[i-1] || s[old]!= s[i])&& old!=i)
                    count++;
                old = i;
            }
            i++;
        }
        cout<<count<<endl;
        cout<<old;
        if(old+1 == size){
            count--;
        }
        return count+1;

    }
};
