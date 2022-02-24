class Solution {
private:
     bool isVowel(char ch){
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'|| ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
public:
   
    string reverseVowels(string s) {
        int start=0;
        int end=s.length()-1;
        while(start < end){
            if(isVowel(s[start]) && isVowel(s[end])){
                swap(s[start],s[end]);
                start++,end--;
            }
            else if(isVowel(s[start])){
                end--;
            }
            else{
                start++;
            }
        }
        
        return s;
    }
};