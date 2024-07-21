class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int j =0;
        int k = s.length()-1;
        while(s[j]==' ')
        j++;
        while(s[k]==' ')
        k--;
        while(k>=j){
            string t = "";
            while(k>=j && s[k]==' ')
            k
            --;
            while(k>=j && s[k]!=' '){
                t.push_back(s[k]);
                k--;
            }
            reverse(t.begin(),t.end());
            ans += t;
            if(k>j)
            ans += " ";
        }
        return ans;
    }
};