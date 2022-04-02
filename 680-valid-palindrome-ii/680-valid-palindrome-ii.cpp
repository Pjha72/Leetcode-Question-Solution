class Solution {
    private:
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++,end--;
        }
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        int start =0;
        int end = s.length()-1;
        while(start<=end){
            if(s[start]!=s[end]){
                return isPalindrome(s,start+1,end) || isPalindrome(s,start,end-1);
            }
            else{
                start++,end--;
            }
        }
        return true;
    }
};