class Solution {
public:
    string reverseWords(string s) {
        int l=0,r=0;
        while(l<s.length()){
            while(r<s.length() && s[r]!= ' '){
                r++;
            }
            reverse(s.begin()+l,s.begin()+r);
            l=r+1;
            r=l;    
        }
        return s;
    }
};