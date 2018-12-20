class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        vector<string> local;
        vector<string> domain;
        int flag = 0;
        for(int i = 0;i < emails.size() ; i++){
            string l_temp = "";
            string d_temp = "";
            flag = 0;
            for(int j = 0; j < emails[i].length(); j++){
                if( flag == 0){
                    if(emails[i][j] == '.'){
                        continue;
                    }
                    if(emails[i][j] == '+'){
                        flag = 1;
                        j =  emails[i].find("@");
                    }
                    else{
                        l_temp = l_temp + emails[i][j];
                    }
                }
                else{
                    d_temp = emails[i].substr( j, emails[i].length()-1) ;
                    break;
                }

            }
            domain.push_back(d_temp);
            local.push_back(l_temp);
        }
        sort(local.begin(),local.end());
        local.erase( unique(local.begin(), local.end()), local.end());
        sort(domain.begin(),domain.end());
        domain.erase( unique(domain.begin(), domain.end()), domain.end());
        return (local.size() > domain.size()) ? local.size() : domain.size();

    }
};
