class Solution {
public:
    static bool cmp(string &x, string &y) {
        int a = x.size();
        int b = y.size();
        return (a == b) ? x < y : a < b;
    }
    string common(string a, string b) {
        int i = 0, m = a.size(), n = b.size();
        while (i < m && i < n && a[i] == b[i]) i++;
        return a.substr(0, i);
    }
    string longestCommonPrefix(vector<string>& s) {
        if (s.empty()) return ""; 
        if(s.size()==1) return s[0];
        sort(s.begin(), s.end(), cmp); 
        int n = s.size();
        return common(common(s[0], s[n - 1]),s[1]);
    }
};