class Solution {
public:
    int countBinarySubstrings(string s) {
       int ans =0;
        int c = 1;
        int p = 0;
        
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                ans+=min(p,c);
                p=c;
                c=1;
            }
            else{
                c++;
            }
        }
        return ans + min(p,c);
    }
};