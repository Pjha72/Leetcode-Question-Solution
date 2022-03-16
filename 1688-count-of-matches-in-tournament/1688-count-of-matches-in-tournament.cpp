class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        int match_play;
        while(n>1){
            if(n&1){
                match_play = (n-1)/2;
                match+=match_play;
                n=((n-1)/2)+1;
                
            }
            else{
                match_play = n/2;
                match = match + match_play;
                n/=2;
            }
        }
        return match;
    }
};