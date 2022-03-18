class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size(),m=word2.size();
        string ans1 = "",ans2 = "";
        for(int i=0;i<n;i++){
            ans1+=word1[i];
        }
        for(int i=0;i<m;i++){
            ans2+=word2[i];
        }
        return (ans1==ans2); 
    }
};