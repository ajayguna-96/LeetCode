class Solution {
public:
     void sortWord(string& s) {
        int i = 1, j = s.size() - 1;
        if (j % 2) {
            --j;
        }
        while (i < j) {
            swap(s[i], s[j]);
            i += 2;
            j -= 2;
        }
        int mid = (s.size() + 1) / 2;
        sort(s.begin(), s.begin() + mid);
        sort(s.begin() + mid, s.end());
    }
    int numSpecialEquivGroups(vector<string>& A) {
        for (int i = 0; i < A.size(); ++i) {
            sortWord(A[i]);
        }
        sort(A.begin(), A.end());

        int result = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (i > 0 && A[i] == A[i - 1]) {
                continue;
            }
            ++result;
        }
        return result;
    }


};
