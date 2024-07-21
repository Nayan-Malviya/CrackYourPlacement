class Solution {
public:

    bool checkPalindrome(string s){
        int j=s.length()-1;
        int i=0;
        while(i<=j){
            if(s[i]!=s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        string a = s;
        int i=0;
        int j = s.length() -1;
        bool f = 0;
        while(i<=j){
            if(s[i]!=s[j]){
                f=1;
                break;
            }
            i++;
            j--;
        }
        if(f==0){
            return true;
        }
        if(f==1){
            a.erase(a.begin() + i);
            bool ans = checkPalindrome(a);
            if(ans)
            return true;
            else{
               a=s;
               a.erase(a.begin() + j);
               bool res = checkPalindrome(a);
               if(res)
               return true; 
            }
        }
         return false;
    }
};