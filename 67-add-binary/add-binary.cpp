class Solution {
public:

    string addString(string a, string b){
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0;
        int carry = 0;
        while(i<a.length()){
            int x = (a[i] - '0') + carry;
            if(i<b.length()){
                x = x + (b[i]-'0');
            }

            if(x==0){
                carry = 0;
                a[i] = '0';
            }
            else if(x==1){
            a[i] = '1';
            carry = 0;
            }
            else if(x==2){
                a[i] = '0';
                carry = 1;
            }
            else if(x==3){
                a[i] = '1';
                carry =1;
            }
            i++;
        }
        if(carry){
            a.push_back('1');
        }
        reverse(a.begin(),a.end());
        return a;
    }

    string addBinary(string a, string b) {
        int carry =0;
        int l1 = a.length();
        int l2 = b.length();
        string ans = "";

        if(l1>=l2)
        ans = addString(a,b);

        else
        ans = addString(b,a);
        
    return ans;

    }
};