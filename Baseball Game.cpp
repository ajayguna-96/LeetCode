class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        stack <int> st;
        for(int i = 0; i<ops.size() ; i++){
            if(ops[i] == "C" ){
                int x = st.top();
                st.pop();
                sum = sum - x;
            }
            else if(ops[i] == "D"){
                int x = st.top();
                st.push(2*x);
                sum += 2*x;
            }
            else if(ops[i] == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x+y);
                sum = sum + x + y;
            }
            else{
                int y = stoi(ops[i]);
                st.push(y);
                sum = sum + y;
            }
        }
        return sum;
    }
};
