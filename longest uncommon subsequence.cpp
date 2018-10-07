class Solution {
public:
    int findLUSlength(string a, string b) {
    int i;
    int size;
    if(a.length()>b.length())
    {
        size = a.length();
    }
    else
    {
        size = b.length();
    }
    if (a.compare(b) != 0) return size;
    else return -1;

    }
};
