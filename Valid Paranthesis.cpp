class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length() < 1) return true;
        for(int i = 0; i<s.length() ; i++){
            if( s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                cout<<"pushed";
            }
            if(st.empty())
                return false;
            switch(s[i])
            {
                case ')':
                {
                    cout<<"entered";
                    char x = st.top();
                    if( x != '('){
                        return false;
                    }
                    cout<<"done";
                    st.pop();
                    break;
                }
                case  '}' :
                {
                    char x = st.top();
                    if( x != '{'){
                        return false;
                    }
                    st.pop();
                    break;
                }
                case ']':
                {
                    char x = st.top();
                    if( x != '['){
                        return false;
                    }
                    st.pop();
                    break;
                }
            }
        }
        return(st.empty());


    }
};
