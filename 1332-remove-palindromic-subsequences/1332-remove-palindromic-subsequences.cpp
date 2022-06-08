class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0,j=s.length()-1;
        if(!s.size())
            return 0;
        while(i<j){
            if(s[i]!=s[j]){
                return 2;
            }
            i++,j--;
        }
        return 1;
    }
};