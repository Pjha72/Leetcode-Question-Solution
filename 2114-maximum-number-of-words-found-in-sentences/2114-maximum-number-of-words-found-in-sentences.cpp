class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int maxlen = 0;
        for(int i=0;i<sentences.size();i++){
            if(maxlen < findWords(sentences[i])){
                maxlen = findWords(sentences[i]);
            }
        }
        return maxlen;
    }
    
    int findWords(string s){
        int count =0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                count++;
            }
            
            while(i<n && s[i]!=' '){
                i++;
            }
        }
        return count;
    }
};